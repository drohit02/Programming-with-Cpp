//Struct program using this pointer : Date

#include<stdio.h>
#include<string.h>

	struct Date {
		
		int day;
		int month;
		int year;
		
		void display()
		{
			printf("Current Date is :%d/%d/%d",this->day,this->month,this->year);
		}
	};
	int main()
	{
		Date dt1 ;
		dt1.day = 22 ;
		dt1.month = 06 ;
		dt1.year = 2006 ;
		
		dt1.display();
		return 0;
	}
