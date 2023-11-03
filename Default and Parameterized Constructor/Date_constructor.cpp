//struct program: Default and Parameterized Constructor :Date

#include<stdio.h>
#include<string.h>

	struct Date {
		int day;
		int month;
		int year;
		
		void display()
		{
			printf("Current Date is : %d:%d:%d\n",getDay(),getMonth(),getYear());
		}
		//Default Constructor
		Date(){
			this->day = 01 ;
			this->month = 01 ;
			this->year = 1971 ;
		}
		//parameterized constructor
		Date(int day,int month,int year){
			this->day = day ;
			this->month = month ;
			this->year = year ;
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
		dt1.display();
		
		Date dt2(11,12,2006);
		dt2.display();	
		return 0 ;
	}
