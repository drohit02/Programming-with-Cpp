//Assignment 20 :Polymorphism:Employee and HR

#include<iostream>
#include<string.h>
using namespace std;
	
	struct Employee 
	{	
		int empID;
		char name [20];
		int salary;
		
		virtual void display(){
			cout<<"Id of the Employee is : "<<getEmpId();
			cout<<"\nName of the Employee is : "<<getName();
			cout<<"\nSalary of the Employee is : "<<getSalary();
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

	struct HR:public Employee{
		float commission;
		
		void display(){
			Employee::display();
			cout<<"Commission of HR is : "<<getCommission();
		}
		float calSalary(){
			return this->salary+this->commission;
		}
		//Default Constructor
		HR ():Employee(){
			cout<<"Default Constructor is called"<<endl;
			this->commission = 0.0 ;
		}
		//Parameterized Constrcutor
		HR (int ID,char *name,int salary,float commission):Employee(ID,name,salary){
			cout<<"parameterized constructor is called"<<endl;
			this->commission = commission ;
		}
		void setCommission(float commission){
			this->commission = commission;
		}
		float getCommission(){
			return this->commission;
		}
	};
	int main(){
		Employee *emp;
		
		HR hr1;
		emp = &hr1;
		emp->display();
		cout<<"\nTotal Salary of the Employee : "<<emp->calSalary()<<endl;
		cout<<endl;
		HR hr2(7,"Dhoni",3200000,97787.98);
		emp = &hr2 ;
		emp->display();
		cout<<"\nTotal Salary of the Employee : "<<emp->calSalary()<<endl;
		return 0;
	}
