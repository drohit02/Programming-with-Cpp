//Assignment 19 : Inheritance Improved:Employe,HR,SalePerson,Admin

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
			cout<<"\n";
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
	struct SalePerson:public Employee{
	
		int target;
		float incentive;
		
		void display(){
			Employee::display();
			cout<<"Target for Sale Person is "<<getTarget();
			cout<<"\nIncentive for the Sale Person is "<<getIncentive();
			cout<<"\n";
		}
		//Default Constructor 
		SalePerson():Employee(){
			cout<<"Default constructor is called"<<endl;
			this->target = 0 ;
			this->incentive = 0.0 ;
		}
		//Parameterized Constructor
		SalePerson(int ID,char * name,int salary,int target,float incentive):Employee(empID,name,salary){
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
		Admin amd1;
		amd1.display();
		cout<<"\n";
		Admin amd2(7,"Dhoni",32000,700);
		amd2.display();
		cout<<"\n";
		SalePerson sp1 ;
		sp1.display();
		cout<<"\n";
		SalePerson sp2(101,"Virat",32000,400000,950.75);
		sp2.display();
		
		return 0;
	}
