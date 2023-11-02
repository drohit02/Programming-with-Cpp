//struct program :Mutator and Accessor : Complex Number

#include<stdio.h>
#include<string.h>

	struct ComplexNumber{
		int real_part;
		int imaginary_part;
		
		void display(){
			printf("Compolex Number is : %d+%di",getReal(),getImaginary());
		}
		void setRealPart(int realNum){
			this->real_part = realNum;
		}
		void setImaginaryPart(int imaginaryNum){
			this->imaginary_part = imaginaryNum;
		}
		int getReal(){
			return this->real_part;
		}
		int getImaginary(){
			return this->imaginary_part;
		}
	};
	int main(){
		ComplexNumber cmlxNum1;
		
		cmlxNum1.setRealPart(12);
		cmlxNum1.setImaginaryPart(8);
		
		cmlxNum1.display();
	}
