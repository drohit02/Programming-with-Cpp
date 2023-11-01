//Struct program: Admin

#include<stdio.h>
#include<string.h>

	struct Admin
	{
		int amd_id ;
		char name [20];
		int salary ;
		float allowance ;
			
	};
	
	void display(Admin *);
	int main()
	{
		Admin amd1 ;
		amd1.amd_id = 210 ;
		strcpy(amd1.name,"Virat kohli");
		amd1.salary = 25500;
		amd1.allowance = 750.50 ;
		
		display(&amd1);
		
		return 0 ;
	}
	void display(Admin * ptr)
	{
		printf("Id of the Admin : %d",ptr->amd_id);
		printf("\nName of admin :%s",ptr->name);
		printf("\nSalary of the Admin : %d",ptr->salary);
		printf("\nAllowance receiverd by Admin : %.2f",ptr->allowance);
	}
