//Assignment 17:cin and cout:Temperature

#include<iostream>
using namespace std ;

int main(){
	float fahrenheit,celsuis;
	
	cout<<"Enter the temperature in fahrenheit : ";
	cin>>fahrenheit;
	
	celsuis = (5.0/9)*(fahrenheit-32);
	cout<<"Temperature in celsius is : "<<celsuis<<endl;
	
	cout<<"\nEnter the temperature in celsuis : ";
	cin>>celsuis;
	
	fahrenheit = (9.0/5)*(celsuis+32);
	cout<<"Temperature in fahrenheit : "<<fahrenheit;
	return 0;
}
