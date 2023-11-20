//Assignment 15 : Binary Operator Overloading : Checking the which Complex number is bigger

#include<stdio.h>
struct ComplexNumber {
	
	int realNum;
	int imaginaryNum;
	
	//Display function
	void display(){
		
	}
	//setter function
	void setRealNum(int num){
		this->realNum = num ;
	}
	void setImaginaryNum(int num){
		this->imaginaryNum = num; 
	}
	//getter function
	int getRealNum(){
		return this->realNum;
	}
	int getImaginaryNum(){
		return this->imaginaryNum;
	}
	//Default Constructor
	ComplexNumber(){
		this->realNum = 0 ;
		this->imaginaryNum = 0 ;
	}
	//Parameterized Constructor
	ComplexNumber(int num1,int num2){
		this->realNum = num1 ;
		this->imaginaryNum = num2 ;
	}
	//Binary Operator Overloading:Greater Than Operator
	int operator>(ComplexNumber cnObj){
		if(this->realNum>cnObj.realNum){
			return 1 ;
		}
		else{
			return 0 ;
		}
	}
	
};

int main(){
	int nm1,nm2,nm3,nm4;
	nm1 = 30 ;
	nm2 = 20 ;
	nm3 = 10 ;
	nm4 = 40 ;
	
	ComplexNumber c1(nm1,nm2);
	ComplexNumber c2(nm3,nm4);
	
	int res = c1>c2; //c1>c2 interpreted as c1.operator>(c2)
	
	if (res!=0){
		printf("Complex number c1 is greater than c2");
	}
	else{
		printf("Complex number c2 is greater than c1");
	}
	return 0 ;
}

