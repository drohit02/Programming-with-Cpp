//Struct program using this pointer : HR

#include<stdio.h>
#include<string.h>

	struct HR {
		int hr_id;
		char name [20];
		int salary ;
		int commission;
		
		void display()
		{
			printf("HR id is : %d",this->hr_id);
			printf("\nName of HR is : %s",this->name);
			printf("\nSalary of HR is : %d",this->salary);
			printf("\nCommission for HR is :%d",this->commission);
		}
	};
	int main()
	{
		HR hr1;
		hr1.hr_id = 101;
		strcpy(hr1.name,"Virat kohli");
		hr1.salary = 27000;
		hr1.commission = 750;
		
		hr1.display();
		return 0;
	}
	
