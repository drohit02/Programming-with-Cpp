//struct program :Mutator and Accessor : Sales Person

#include<stdio.h>
#include<string.h>

	struct SalePerson{
		int spID;
		char name [20];
		int salary;
		int target;
		float incentive;
		
		void display(){
			printf("Sales Person Id is : %d",getID());
			printf("\nName of Sale Person is : %s",getName());
			printf("\nSalary of Sale Person is :%d",getSalary());
			printf("\nTarget for Sale Person is :%d",getTarget());
			printf("\nIncentive for the Sale Person is :%.2f",getIncentive());
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
		
		sp1.setID(101);
		sp1.setName("Virat Kohli");
		sp1.setSalary(32000);
		sp1.setTarget(35000);
		sp1.setIncentive(850.50);
		
		sp1.display();
		return 0;
	}
