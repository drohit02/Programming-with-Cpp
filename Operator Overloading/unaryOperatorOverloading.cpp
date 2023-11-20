//Assignment 17 : Unary Operator Overloading

#include<iostream>
#include<string.h>
using namespace std;

struct ComplexNumber{
	int realNum;
	int imaginaryNum;
	
	void display(){
		cout<<"Complex Number is : "<<getReal()<<"+"<<getImaginary()<<"i\n"<<endl;
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
		return this->imaginaryNum;
	}
	ComplexNumber(){
		this->realNum = 0 ;
		this->imaginaryNum = 0 ;
	}
	ComplexNumber(int num1,int num2){
		this->realNum = num1 ;
		this->imaginaryNum = num2 ;
	}
	ComplexNumber operator++(int fake){
		ComplexNumber temp ;
		temp.realNum = this->realNum++;
		temp.imaginaryNum = this->imaginaryNum++;
		return temp;
	}
	
	ComplexNumber operator++(){
		ComplexNumber temp ;
		temp.realNum = ++this->realNum;
		temp.imaginaryNum = ++this->imaginaryNum;
		return temp;	
	}
	ComplexNumber operator--(int fake){
		ComplexNumber temp ;
		temp.realNum = this->realNum--;
		temp.imaginaryNum = this->imaginaryNum--;
		return temp;
	}
	
	ComplexNumber operator--(){
		ComplexNumber temp ;
		temp.realNum = --this->realNum;
		temp.imaginaryNum = --this->imaginaryNum;
		return temp;
		
	}
};
int main(){
	int num1,num2,num3,num4;
	num1 = 10 ;
	num2 = 20 ;
	num3 = 5 ;
	num4 = 3 ;
	
	ComplexNumber c1(num1,num2);
	ComplexNumber c2;
	ComplexNumber c3(num3,num4);
	ComplexNumber c4;
	
	cout<<"Unary Operator Overloading - Post and Pre Increment"<<endl;
	c2 = c1++ ; //it is interpreted as c2 = c1.operator++();
	cout<<"C1 Complex Number : ";
	c1.display();
	cout<<"C2 Complex Number : ";
	c2.display(); 
	c4 = ++c3; 
	cout<<"C3 Complex Number : ";
	c3.display();
	cout<<"C4 complex Number : ";
	c4.display();
	
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Unary Operator Overloading - Post and Pre Decrement"<<endl;
	c2 = c1-- ; //it is interpreted as c2 = c1.operator++();
	cout<<"C1 Complex Number : ";
	c1.display();
	cout<<"C2 Complex Number : ";
	c2.display(); 
	c4 = --c3; 
	cout<<"C3 Complex Number : ";
	c3.display();
	cout<<"C4 complex Number : ";
	c4.display();
	
	return 0;
}

