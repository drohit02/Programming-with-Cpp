//Assignment 17 : struct program: Time

#include<iostream>
#include<string.h>
using namespace std;

	struct Time {
		int hr;
		int min;
		int sec;
		
		void display()
		{
			cout<<"Current Time is "<<getHrs()<<":"<<getMin()<<":"<<getSec()<<"\n";
		}
		//Default Constructor
		Time(){
			this->hr = 00 ;
			this->min = 00 ;
			this->sec = 00 ;
		}
		//Parameterized Constructor
		Time(int hrs,int min,int sec){
			this->hr = hrs ;
			this->min = min ;
			this->sec = sec ;
		}
		void setHrs(int hr){
			this->hr = hr ;
		}
		void setMin(int min) {
			this->min = min ;
	    }
		void setSec(int sec){
			this->sec = sec ;
		 }
		int getHrs()
		{
			return this->hr;
		}
		int getMin()
		{
			return this->min;
		}
		int getSec()
		{
			return this->sec;
		}
	};
	int main()
	{
		Time tm1;		
		tm1.display();
		
		Time tm2 (12,12,57);
		tm2.display();	
		return 0 ;
	}
