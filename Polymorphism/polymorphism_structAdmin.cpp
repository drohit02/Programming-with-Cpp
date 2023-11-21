//Assignment 20:polymorphism:Emloyee and Admin

#include<iostream>
#include<string.h>
using namespace std;
	
	struct Employee 
	{	
		int empID;
		char name [20];
		int salary;
		
		virtual void display(){
			cout<<"Employee Object is created"<<endl;
			cout<<"Id of the Employee is : "<<this->empID;
			cout<<"\nName of the Employee is : "<<this->name;
			cout<<"\nSalary of the Employee is : "<<this->salary;
			cout<<"\n";
		}
		virtual float calSalary(){
			return this->salary ;
		}
		//Default Constructor
		Employee() {
			cout<<"Default Constructor is Called "<<endl;
			this->empID = 0 ;
			strcpy(this->name,"Not Given");
			this->salary = 0;
		}
		//Parameterized Constructor
		Employee(int ID,char * name ,int salary){
			cout<<"Parameterized Constructor is Called"<<endl;
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

	struct Admin:public Employee{

		float allowance;
		
		void display(){
			cout<<"Admin Object is created"<<endl;
			Employee::display();
			cout<<"Allowance of Admin is : "<<getAllowance();
			cout<<"\n";
		}
		virtual float calSalary(){
			return this->salary+this->allowance;
		}
		//Default Constructor
		Admin():Employee(){
			this->allowance = 0.0;
		}
		//Parameterized Constructor
		Admin(int ID,char * name,int salary,int allowance):Employee(ID,name,salary){
			this->allowance = allowance;	
		}		
		void setAllowance(float allowance){
			this->allowance = allowance;
		}

		float getAllowance(){
			return this->allowance;
		}
	};
	int main(){
		Employee *emp;
		
		Admin amd1;
		emp = &amd1;
		emp->display();
		cout<<"Total Salary of Empolyee is :"<<emp->calSalary()<<endl;
		cout<<endl;
		Admin amd2(201,"virat",1000,2000);
		emp = &amd2;
		emp->display();
		cout<<"Total Salary of Empolyee is :"<<emp->calSalary()<<endl;
		return 0;
	}
