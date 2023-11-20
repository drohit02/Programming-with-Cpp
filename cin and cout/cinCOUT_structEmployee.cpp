//Assignment 17 : cin and cout :struct program :Employee

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
	int main(){
		Employee emp1;
		emp1.display();
		
		Employee emp2(201,"Virat Kohli",420000);
		emp2.display();
		return 0;
	}
