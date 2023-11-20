//Assignment 17 :struct program:HR

#include<iostream>
#include<string.h>
using namespace std;

	struct HR{
		int hrID;
		char name [20];
		int salary;
		float commission;
		
		void display(){
			cout<<"HR Id is : "<<getID();
			cout<<"\nName of HR is :"<<getName();
			cout<<"\nSalary of HR is : "<<getSalary();
			cout<<"\nCommission of HR is : "<<getCommission();
		}
		//Default Constructor
		HR (){
			this->hrID = 0 ;
			strcpy(this->name,"Not Given");
			this->salary = 0 ;
			this->commission = 0.0 ;
		}
		//Parameterized Constrcutor
		HR (int ID,char *name,int salary,float commission){
			this->hrID = ID;
			strcpy(this->name,name);
			this->salary = salary ;
			this->commission = commission ;
		}
		void setID(int id){
			this->hrID = id ;
		}
		void setName(char * name){
			strcpy(this->name,name);
		}
		void setSalary(int salary){
			this->salary = salary ;
		}
		void setCommission(float commission){
			this->commission = commission;
		}
		int getID(){
			return this->hrID;
		}
		char * getName(){
			return this->name;
		}
		int getSalary(){
			return this->salary;
		}
		float getCommission(){
			return this->commission;
		}
	};
	int main(){
		
		HR hr1 ;
		hr1.display();
		
		HR hr2(101,"Virat",34000,870.75);	
		hr2.display();
		return 0;
	}
