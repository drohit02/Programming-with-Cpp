//Assignment 19 :Inheritance Improved:Employee and HR

#include<iostream>
#include<string.h>
using namespace std;
	
	struct Employee 
	{	
		int empID;
		char name [20];
		int salary;
		
		void display(){
			cout<<"Id of the Employee is : "<<getEmpId();
			cout<<"\nName of the Employee is : "<<getName();
			cout<<"\nSalary of the Employee is : "<<getSalary();
			cout<<"\n";
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
		//Default Constructor
		HR ():Employee(){
			cout<<"Default Constructor is called"<<endl;
			this->commission = 0.0 ;
		}
		//Parameterized Constrcutor
		HR (int ID,char *name,int salary,float commission):Employee(empID,name,salary){
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
		Employee emp1;
		emp1.display();
		cout<<"\n";
		Employee emp2(201,"Virat Kohli",420000);
		emp2.display();
		cout<<"\n";
		HR hr1 ;
		hr1.display();
		cout<<"\n\n";
		HR hr2(101,"Virat",34000,870.75);	
		hr2.display();
		cout<<"\n\n";
		
		return 0;
	}
