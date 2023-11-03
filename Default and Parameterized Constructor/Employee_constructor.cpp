//struct program :Default and Parameterized Constructor :Employee

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
			printf("\n");
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
