//Assignment 17 :struct program : Complex Number

#include<iostream>
#include<string.h>
using namespace std;

	struct ComplexNumber{
		int real_part;
		int imaginary_part;
		
		void display(){
			cout<<"Complex Number is "<<getReal()<<"+"<<getImaginary()<<"i\n";
		}
		ComplexNumber(){
			this->real_part = 0 ;
			this->imaginary_part = 0 ;
		}
		ComplexNumber(int real,int imaginary){
			this->real_part = real ;
			this->imaginary_part = imaginary ;
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
		cmlxNum1.display();
		
		ComplexNumber cmlxNum2(12,8);
		cmlxNum2.display();
	}
