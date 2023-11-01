//Struct program : sales_person

#include<stdio.h>
#include<string.h>

	struct SalesPerson{
		int sp_id ;
		char name [20];
		int salary ;
		int target ;
		float incentive;
	};
	void display(SalesPerson *);
	int main(){
		SalesPerson sp1;
		sp1.sp_id = 111;
		strcpy(sp1.name,"Virat Kohli");
		sp1.salary = 32000;
		sp1.target = 250000;
		sp1.incentive = 1200;
	
		display(&sp1);
		return 0;
	}
	void display(SalesPerson * ptr)
	{
		printf("Sales Person Id is : %d",ptr->sp_id);
		printf("\nName of Sales Person Id is : %s",ptr->name);
		printf("\nSalary of Sales Person Id is : %d",ptr->salary);
		printf("\nTarget for Sales Person Id is : %d",ptr->target);
		printf("\nIncentive for Sales Person Id is : %.2f",ptr->incentive);
	}


