//struct in cpp:Employee struct

#include<stdio.h>
#include<string.h>

	struct Employee
	{
		int emp_id ;
		char name[20];
		int salary;	
	};
	void display(Employee *); 
	int main()
	{
		Employee emp1;
		emp1.emp_id = 202;
		strcpy(emp1.name,"Virat Kohli");
		emp1.salary = 20000;
		
		display(&emp1);
		return 0;
		
	}
	void display(Employee * ptr)
	{
		printf("Id of the employee is : %d",ptr -> emp_id);
		printf("\nName of the employee is : %s",ptr -> name);
		printf("\nSalary of the employee is : %d",ptr -> salary);
	}
	

