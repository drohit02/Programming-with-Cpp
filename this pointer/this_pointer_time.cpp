//Struct program using pointer : Time

#include<stdio.h>
#include<string.h>

	struct Time{
		int hr ;
		int min;
		int sec ;
		
		void display()
		{
			printf("Current Time is : %d:%d:%d",this->hr,this->min,this->sec);
		}
	};
	int main() {
		
		Time tm1;
		tm1.hr = 12 ;
		tm1.min = 25 ;
		tm1.sec = 56 ;
		 
		tm1.display();
		return 0;
	}
