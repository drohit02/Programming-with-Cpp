//struct program :HR

#include<stdio.h>
#include<string.h>

	struct HR{
		
		int hr_id;
		int salary ;
		char name [20];
		float commission;
	};
	void display(HR *);
	int main()
	{
		HR hr1;
		hr1.hr_id = 202;
		hr1.salary =27000;
		strcpy(hr1.name,"Virat Kohli");
		hr1.commission = 450.75;
	
		display(&hr1);	
		return 0;
	}
	void display(HR * ptr)
	{
		printf("HR id is : %d",ptr->hr_id);
		printf("\nName of HR is : %s",ptr->name);
		printf("\nSalary of HR : %d",ptr->salary);
		printf("\nCommission received by HR : %.2f",ptr->commission);
	}
