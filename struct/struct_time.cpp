//struct program: Time

#include<stdio.h>
#include<string.h>

	struct Time {
		int hr;
		int min;
		int second;
	};
	void display(Time *);
	int main() {
		
		Time tm1;
		tm1.hr = 11 ;
		tm1.min = 22;
		tm1.second = 54;
		
		display(&tm1);
		return 0;
	}
	void display(Time *ptr)
	{
		printf("Current Time is : %d:%d:%d",ptr->hr,ptr->min,ptr->second);
	}
