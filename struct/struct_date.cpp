//struct program : Date 

#include<stdio.h>
#include<string.h>

	struct Date {
		int day;
		int month;
		int year;
	};
	void display(Date *);
	int main()
	{
		Date dt1;
		dt1.day = 12 ;
		dt1.month = 06;
		dt1.year = 1997 ;
		
		display(&dt1);
		return 0;
	}
	void display(Date * ptr)
	{
		printf("Date is : %d/%d/%d",ptr->day,ptr->month,ptr->year);
	}
