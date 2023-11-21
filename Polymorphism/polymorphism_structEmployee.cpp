//Assignment 20 : Polymorphism:Employe,HR,SalePerson,Admin

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
			cout<<"\n";
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
	struct Admin:public Employee{

		float allowance;
		
		void display(){
			cout<<"Admin Object is created"<<endl;
			Employee::display();
			cout<<"Allowance of Admin is : "<<getAllowance();
			cout<<"\n";
		}
		float calSalary(){
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
	struct SalePerson:public Employee{
	
		int target;
		float incentive;
		
		void display(){
			Employee::display();
			cout<<"Target for Sale Person is "<<getTarget();
			cout<<"\nIncentive for the Sale Person is "<<getIncentive();
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
		SalePerson(int ID,char * name,int salary,int target,float incentive):Employee(ID,name,salary){
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
		
		Admin amd1;
		emp = &amd1;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		Admin amd2(201,"virat",10140000,20000);
		emp = &amd2;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		HR hr1;
		emp = &hr1;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		HR hr2(7,"Dhoni",3200000,97787.98);
		emp = &hr2 ;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		SalePerson sp1;
		emp = &sp1;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		SalePerson sp2(18,"Dhoni",2400000,12000,7500.75);
		emp = &sp2;
		emp->display();
		cout<<"Total Salary of the Employee is : "<<emp->calSalary()<<endl;
		cout<<endl;
		return 0;
	}
