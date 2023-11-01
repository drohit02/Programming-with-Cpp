//Struct program using this pointer :Admin

#include<stdio.h>
#include<string.h>

	struct Admin{
		
		int adm_id ;
		char name [20];
		int salary;
		int allowance;
		
		void display()
		{
			printf("Admin id is : %d",this->adm_id);
			printf("\nName of Admin is : %s",this->name);
			printf("\nSalary of Admin is : %d",this->salary);
			printf("\nAllowance for Admin id is : %d",this->allowance);
		}
	};
	int main(){
		
		Admin amd1;
		amd1.adm_id = 101 ;
		strcpy(amd1.name,"Virat Kohli");
		amd1.salary = 27000;
		amd1.allowance = 750;
		
		amd1.display();
		return 0;
	}
