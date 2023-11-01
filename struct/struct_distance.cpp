//Struct Program :Distance

#include<stdio.h>
#include<string.h>
	
	struct Distance {
		
		int feet;
		int inch ;
		
 	};
 	
 	void display(Distance *);
 	
 	int main() {
 		
 		Distance dst1;
 		dst1.feet = 22 ;
 		dst1.inch = 56 ;
 		
 		display(&dst1);
 		return 0;
 		
	 }
	 void display(Distance * ptr)
	 {
	 	printf("The Distance is :%d feet and %d inch",ptr->feet,ptr->inch);
	 }
