//Assignment 14: Operator Overloading using member function and the non-member function : Complex number

#include<stdio.h>
#include<string.h>

	struct ComplexNumber{
		int realNum ;
		int imaginaryNum;
		
		ComplexNumber(){
			this->realNum = 0 ;
			this->imaginaryNum = 0 ;
		}
		ComplexNumber(int real,int imaginary){
			this->realNum = real ;
			this->imaginaryNum = imaginary ;
		}
		void display(){
			printf("The Complex Number is : %d + %di",getReal(),getImaginary());
		}
		void setReal(int num){
			this->realNum = num ;
		}
		void setImaginary(int num){
			this->imaginaryNum = num ;
		}
		int getReal(){
			return this->realNum;
		}
		int getImaginary(){
			return this->imaginaryNum ;
		}
		
		//Addition of the Complex Number 
		ComplexNumber operator+(int nm){
			ComplexNumber temp ;
			temp.realNum = this->realNum + nm;
			temp.imaginaryNum = this->imaginaryNum + nm;
			
			return temp;
		}
		ComplexNumber operator+(ComplexNumber cnObj){
			ComplexNumber temp ;
			temp.realNum = this->realNum + cnObj.realNum;
			temp.imaginaryNum = this->imaginaryNum + cnObj.imaginaryNum;
			
			return temp;
		}
		//Substraction of the Complex Number
		ComplexNumber operator-(int nm){
			ComplexNumber temp ;
			temp.realNum = this->realNum - nm;
			temp.imaginaryNum = this->imaginaryNum - nm;
			
			return temp;
		}
		ComplexNumber operator-(ComplexNumber cnObj){
			ComplexNumber temp ;
			temp.realNum = this->realNum - cnObj.realNum;
			temp.imaginaryNum = this->imaginaryNum - cnObj.imaginaryNum;
			
			return temp;
		}
		//Multiplication of Complex Number
		ComplexNumber operator*(int nm){
			ComplexNumber temp ;
			temp.realNum = this->realNum * nm;
			temp.imaginaryNum = this->imaginaryNum * nm;
			
			return temp;
		}
		ComplexNumber operator*(ComplexNumber cnObj){
			ComplexNumber temp ;
			temp.realNum = this->realNum * cnObj.realNum;
			temp.imaginaryNum = this->imaginaryNum * cnObj.imaginaryNum;
			
			return temp;
		}
		//Division of Complex Number
		ComplexNumber operator/(int nm){
			ComplexNumber temp ;
			temp.realNum = this->realNum / nm;
			temp.imaginaryNum = this->imaginaryNum / nm;
			
			return temp;
		}
		ComplexNumber operator/(ComplexNumber cnObj){
			ComplexNumber temp ;
			temp.realNum = this->realNum / cnObj.realNum;
			temp.imaginaryNum = this->imaginaryNum / cnObj.imaginaryNum;
			
			return temp;
		}
	};
	ComplexNumber operator+(int,ComplexNumber); 
	ComplexNumber operator-(int,ComplexNumber);
	ComplexNumber operator*(int,ComplexNumber);
	ComplexNumber operator/(int,ComplexNumber);
	int main(){
		int num1 = 10 ;
		int num2 = 20 ;
		int num3 = 11 ;
		int num4 = 21 ;
		
		ComplexNumber cn1(num1,num2);
		ComplexNumber cn2(num3,num4); 
		ComplexNumber cn3;
		ComplexNumber cn4;
		
		cn3 = cn1+cn2; //Compiler Interpret as : cn1.add(cn2);
		cn3.display();
		printf("\n");
		cn4 = cn1-num1; //Compiler Interpret as : cn1.sub(num1);
		cn4.display();
		printf("\n");
		cn3 = cn1*cn2; //Compiler Interpret as : cn1.multi(cn2);
		cn3.display();
		printf("\n");
		cn4 = cn1/num1; //Compiler Interpret as : cn1.div(num1);
		cn4.display();
			
		return 0;
	}
	ComplexNumber operator+(int nm,ComplexNumber cnObj){
		ComplexNumber temp ;
		temp.realNum = cnObj.realNum + nm ;
		temp.imaginaryNum = cnObj.imaginaryNum + nm ;
		
		return temp;
	}
	ComplexNumber operator-(int nm,ComplexNumber cnObj){
		ComplexNumber temp ;
		temp.realNum = cnObj.realNum - nm ;
		temp.imaginaryNum = cnObj.imaginaryNum - nm ;
		
		return temp;
	}
	ComplexNumber operator*(int nm,ComplexNumber cnObj){
		ComplexNumber temp ;
		temp.realNum = cnObj.realNum * nm ;
		temp.imaginaryNum = cnObj.imaginaryNum * nm ;
		
		return temp;
	}
	ComplexNumber operator/(int nm,ComplexNumber cnObj){
		ComplexNumber temp ;
		temp.realNum = cnObj.realNum / nm ;
		temp.imaginaryNum = cnObj.imaginaryNum / nm ;
		
		return temp;
	}
