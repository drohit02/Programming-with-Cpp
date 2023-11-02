//struct program:Mutator and Accessor :Date

#include<stdio.h>
#include<string.h>

	struct Date {
		int day;
		int month;
		int year;
		
		void display()
		{
			printf("Current Date is : %d:%d:%d",getDay(),getMonth(),getYear());
		}
		void setDay(int day){
			this->day = day ;
		}
		void setMonth(int month) {
			this->month = month ;
	    }
		void setYear(int year){
			this->year = year ;
		 }
		int getDay()
		{
			return this->day;
		}
		int getMonth()
		{
			return this->month;
		}
		int getYear()
		{
			return this->year;
		}
	};
	int main()
	{
		Date dt1;
		dt1.setDay(10);
		dt1.setMonth(12);
		dt1.setYear(2012);
		
		dt1.display();	
		return 0 ;
	}
