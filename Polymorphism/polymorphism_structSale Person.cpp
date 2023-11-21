//Assignment 20 : polymorphism :Employee and Sales Person

#include<iostream>
#include<string.h>
using namespace std;
	
	struct Employee 
	{	
		int empID;
		char name [30];
		int salary;
		
		virtual void display(){
			cout<<"Id of the Employee is : "<<this->empID;
			cout<<"\nName of the Employee is : "<<this->name;
			cout<<"\nSalary of the Employee is : "<<this->salary;
			cout<<"\n";
		}
		virtual float calSalary(){
			return this->salary;
		}
		//Default Constructor
		Employee() {
			this->empID = 0 ;
			strcpy(this->name,"Not Given");
			this->salary = 0;
		}
		//Parameterized Constructor
		Employee(int ID,char * name ,int salary){
			this->empID = ID ;
			strcpy(this->name,name);
			this->salary = salary;
		}
		void setEmpId(int id){
			this->empID = id ;
		}
		void setEmpName(char * name){
			strcpy(this->name,name);
		}
		void setSalary(int salary){
			this->salary = salary;  
		}
		int getEmpId(){
			return this->empID;
		}
		char * getName(){
			return this->name;
		}
		int getSalary(){
			return this->salary;
		}
	};

	struct SalePerson:public Employee{
		int target;
		float incentive;
		
		void display(){
			Employee::display();
			cout<<"Target for Sale Person is : "<<getTarget();
			cout<<"\nIncentive for the Sale Person is : "<<getIncentive();
			cout<<"\n";
		}
		float calSalary(){
			return this->salary+this->incentive;
		}
		//Default Constructor 
		SalePerson():Employee(){
			cout<<"Default constructor is called"<<endl;
			this->target = 0 ;
			this->incentive = 0.0 ;
		}
		//Parameterized Constructor
		SalePerson(int ID,char* name,int salary,int target,float incentive):Employee(ID,name,salary){
			cout<<"Parameterized constructor is called"<<endl;
			this->target = target ;
			this->incentive = incentive ;
		}
		void setTarget(int target){
			this->target = target;
		}
		void setIncentive(float incentive){
			this->incentive = incentive;
		}
		int getTarget(){
			return this->target;
		}
		float getIncentive(){
			return this->incentive;
		}
	};
	int main(){
		Employee *emp;
		SalePerson sp1;
		emp = &sp1;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		
		SalePerson sp2(18,"Dhoni",2400000,12000,7500.75);
		emp = &sp2;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		return 0;
	}
