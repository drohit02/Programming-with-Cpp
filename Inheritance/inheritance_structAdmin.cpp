//Assignment 19 :Inheritance Improved:Emloyee and Admin

#include<iostream>
#include<string.h>
using namespace std;
	
	struct Employee 
	{	
		int empID;
		char name [20];
		int salary;
		
		void display(){
			cout<<"Employee Object is created"<<endl;
			cout<<"Id of the Employee is : "<<this->empID;
			cout<<"\nName of the Employee is : "<<this->name;
			cout<<"\nSalary of the Employee is : "<<this->salary;
			cout<<"\n";
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
		//Default Constructor
		Admin():Employee(){
			this->allowance = 0.0;
		}
		//Parameterized Constructor
		Admin(int ID,char * name,int salary,int allowance):Employee(empID,name,salary){
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
		Employee emp1;
		emp1.display();
		cout<<"\n";
		Employee emp2(18,"Virat",27000);
		emp2.display();
		cout<<"\n";
		
		Admin amd1;
		amd1.display();
		cout<<"\n";
		Admin amd2(7,"Dhoni",32000,700);
		amd2.display();
		
		return 0;
	}
