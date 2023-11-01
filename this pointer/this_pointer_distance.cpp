//Struct program using this pointer : distance

#include<stdio.h>
#include<string.h>

	struct Distance{
		
		int feet;
		int inch;
		
		void display()
		{
			printf("The Distance is : %d feet and %d inch",this->feet,this->inch);
		}
	};
	int main() {
		
		Distance dt1;
		
		dt1.feet = 12 ;
		dt1.inch = 8;
		
		dt1.display();
		return 0 ;
	}
