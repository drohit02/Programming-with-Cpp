//Struct program : Complex Numnber

#include<string.h>
#include<stdio.h>

	struct ComplexNumber{ 
		
		int real_part;
		int imaginary_part;
		
	};
	void display(ComplexNumber *);
	
	int main(){
		
		ComplexNumber cmxlNum1;
		
		cmxlNum1.real_part = 12 ;
		cmxlNum1.imaginary_part = 8 ;
		
		display(&cmxlNum1);	
		return 0 ;
	}
	void display(ComplexNumber * ptr)
	{
		printf("Complex Numeber id : %d + %di",ptr->real_part,ptr->imaginary_part);
	}
