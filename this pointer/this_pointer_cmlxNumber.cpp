//Struct program using this pointer : complex number

#include<stdio.h>
#include<string.h>

	struct ComplexNumber{
		
		int real_part;
		int imaginary_part;
		
		void display()
		{
			printf("Complex Number is : %d+%di",this->real_part,this->imaginary_part);
		}
	};
	int main() {
		
		ComplexNumber cmlxNum1;
		
		cmlxNum1.real_part = 12 ;
		cmlxNum1.imaginary_part = 8;
		
		cmlxNum1.display();
		return 0 ;
	}
