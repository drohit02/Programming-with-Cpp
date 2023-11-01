//struct program using this pointer : Sales Person

#include<stdio.h>
#include<string.h>

	struct SalesPerson {
		int sp_id;
		char name[20];
		int salary;
		int target;
		float incentive;
		
		void display()
		{
			printf("ID of Sale Person is : %d",this->sp_id);
			printf("\nName of Sale Person is : %s",this->name);
			printf("\nSalary of Sale Person is : %d",this->salary);
			printf("\nTarget for Sale Person is : %d",this->target);
			printf("Incentive for Sale Person is : %d",this->incentive);
		}
	};
	int main() {
		SalesPerson sp1;
		sp1.sp_id = 101;
		strcpy(sp1.name,"Virat Kohli");
		sp1.salary = 28000;
		sp1.target = 300000;
		sp1.incentive = 780.60;
		
		sp1.display();
		return 0 ;
		
	}
