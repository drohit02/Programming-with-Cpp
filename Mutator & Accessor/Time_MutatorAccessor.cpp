//struct program:Mutator and Accessor :Time

#include<stdio.h>
#include<string.h>

	struct Time {
		int hr;
		int min;
		int sec;
		
		void display()
		{
			printf("Current Time is : %d:%d:%d",getHrs(),getMin(),getSec());
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
		tm1.setHrs(10);
		tm1.setMin(12);
		tm1.setSec(47);
		
		tm1.display();	
		return 0 ;
	}
