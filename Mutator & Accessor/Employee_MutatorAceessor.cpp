//struct program :Mutator and Accessor :Employee

#include<stdio.h>
#include<string.h>

	struct Employee 
	{	
		int empID;
		char name [20];
		int salary;
		
		void display(){
			printf("Id of the Employee is : %d",getEmpId());
			printf("\nName of the Employee is : %s",getName());
			printf("\nSalary of the Employee is : %d",getSalary());
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
		emp1.setEmpId(101);
		emp1.setEmpName("Virat");
		emp1.setSalary(27000);
		
		emp1.display();
		return 0;
	}
