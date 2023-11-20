//Assigment 17 :cin and cout:Total salary

#include<iostream>
using namespace std ;

int main(){
	int basic;
	float da,ta,hra;
	
	cout<<"Enter the basic salary : ";
	cin>>basic;
	
	if (basic<=5000){
		da = 0.1*basic;
		ta = 0.15*basic;
		hra = 0.2*basic;
	}
	else{
		da = 0.15*basic;
		ta = 0.2*basic;
		hra = 0.25*basic;
	}
	float total_salary = basic+da+ta+hra;
	cout<<"The basic of the salary is : "<<basic<<endl;
	cout<<"The daily allowance on the salary is : "<<da<<endl;
	cout<<"The travelling allowance on the salary is : "<<ta<<endl;
	cout<<"The house rent allowance on the salary is : "<<hra<<endl;
	cout<<"The total salary is : "<<total_salary<<endl;
	return 0;
}
