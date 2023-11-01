//Struct program using this pointer : Employee

#include<string.h>
#include<stdio.h>

	struct Employee {
		int emp_id;
		char name [20];
		int salary;
		
		void display()
		{
			printf("Id of employee : %d",this->emp_id);
			printf("\nName of employee : %s",this->name);
			printf("\nSalary of employee : %d",this->salary);
		}
	};
	int main()
	{
		Employee emp1;
		
		emp1.emp_id = 101 ;
		strcpy(emp1.name,"Virat Kohli");
		emp1.salary = 25000;
		
		emp1.display();
		return 0;
		
	}

