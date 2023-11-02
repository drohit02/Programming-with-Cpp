//struct program:Mutator and Accessor :HR

#include<stdio.h>
#include<string.h>

	struct HR{
		int hrID;
		char name [20];
		int salary;
		float commission;
		
		void display(){
			printf("HR Id is : %d",getID());
			printf("\nName of HR is : %s",getName());
			printf("\nSalary of HR is :%d",getSalary());
			printf("\nCommission of HR is :%.2f",getCommission());
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
		
		hr1.setID(101);
		hr1.setName("Virat Kohli");
		hr1.setSalary(32000);
		hr1.setCommission(786.78);
		
		hr1.display();
		return 0;
	}
