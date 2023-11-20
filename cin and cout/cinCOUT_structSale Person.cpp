//Assignment 17 : struct program :Sales Person

#include<iostream>
#include<string.h>
using namespace std;

	struct SalePerson{
		int spID;
		char name [20];
		int salary;
		int target;
		float incentive;
		
		void display(){
			cout<<"Sales Person Id is "<<getID();
			cout<<"\nName of Sale Person is "<<getName();
			cout<<"\nSalary of Sale Person is "<<getSalary();
			cout<<"\nTarget for Sale Person is "<<getTarget();
			cout<<"\nIncentive for the Sale Person is "<<getIncentive();
			cout<<"\n";
		}
		//Default Constructor 
		SalePerson(){
			this->spID = 0;
			strcpy(this->name,"Not Given");
			this->target = 0 ;
			this->salary = 0 ;
			this->incentive = 0.0 ;
		}
		//Parameterized Constructor
		SalePerson(int ID,char * name,int salary,int target,float incentive){
			this->spID = ID ;
			strcpy(this->name,name);
			this->target = target ;
			this->salary = salary ;
			this->incentive = incentive ;
		}
		void setID(int id){
			this->spID = id ;
		}
		void setName(char * name){
			strcpy(this->name,name);
		}
		void setSalary(int salary){
			this->salary = salary ;
		}
		void setTarget(int target){
			this->target = target;
		}
		void setIncentive(float incentive){
			this->incentive = incentive;
		}
		int getID(){
			return this->spID;
		}
		char * getName(){
			return this->name;
		}
		int getSalary(){
			return this->salary;
		}
		int getTarget(){
			return this->target;
		}
		float getIncentive(){
			return this->incentive;
		}
	};
	int main(){
		
		SalePerson sp1 ;
		sp1.display();
		
		SalePerson sp2(101,"Virat",32000,400000,950.75);
		sp2.display();
		return 0;
	}
