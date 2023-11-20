//Assignment 17 :struct program : Admin

#include<iostream>
#include<string.h>
using namespace std;

	struct Admin{
		int admID;
		char name [20];
		int salary;
		float allowance;
		
		void display(){
			cout<<"Admin Id is : "<<getID();
			cout<<"\nName of admin is : "<<getName();
			cout<<"\nSalary of Admin is : "<<getSalary();
			cout<<"\nAllowance of Admin is : "<<getAllowance();
			cout<<"\n";
		}
		//Default Constructor
		Admin(){
			this->admID = 0 ;
			strcpy(this->name,"Not Given");
			this->salary = 0;
			this->allowance = 0.0;
		}
		//Parameterized Constructor
		Admin(int ID,char * name,int salary,int allowance){
			this->admID = ID;
			strcpy(this->name,name);
			this->salary = salary;
			this->allowance = allowance;
			
		}
		void setID(int id){
			this->admID = id ;
		}
		void setName(char * name){
			strcpy(this->name,name);
		}
		void setSalary(int salary){
			this->salary = salary ;
		}
		void setAllowance(float allowance){
			this->allowance = allowance;
		}
		int getID(){
			return this->admID;
		}
		char * getName(){
			return this->name;
		}
		int getSalary(){
			return this->salary;
		}
		float getAllowance(){
			return this->allowance;
		}
	};
	int main(){
		
		Admin amd1 ;
		amd1.display();
		
		Admin amd2(101,"Virat Kohli",34000,870.70);
		amd2.display();
		return 0;
	}
