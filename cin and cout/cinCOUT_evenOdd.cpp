//Assignment 17 : cin and cout :Even and Odd program

#include<iostream>
using namespace std;

int main(){
	
	int num ;
	
	cout<<"Enter the number : "<<endl;
	cin>>num;
	
	if(num%2==0){
		cout<<"The number "<<num<<" is even";
	}
	else{
		cout<<"The number "<<num<<" is odd";
	}
	
	return 0 ;
}
