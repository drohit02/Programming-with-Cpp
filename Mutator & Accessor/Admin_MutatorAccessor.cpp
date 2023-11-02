//struct program : Mutator ans Accessor : Admin

#include<stdio.h>
#include<string.h>

	struct Admin{
		int admID;
		char name [20];
		int salary;
		float allowance;
		
		void display(){
			printf("Admin Id is : %d",getID());
			printf("\nName of admin is : %s",getName());
			printf("\nSalary of Admin is :%d",getSalary());
			printf("\nAllowance of Admin is :%.2f",getAllowance());
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
		
		amd1.setID(101);
		amd1.setName("Virat Kohli");
		amd1.setSalary(32000);
		amd1.setAllowance(786.78);
		
		amd1.display();
		return 0;
	}
