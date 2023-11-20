//Assignment 17:cin and cout :accpet 3 digit number find sum and reverse the number

#include<iostream>
using namespace std;

int main(){
	int num,rev,temp,rem,sum=0 ;
	
	cout<<"The the 3-digit number : ";
	cin>>num;
	
	temp = num;
	
	while(num>0){
		rem = num%10;
		sum = sum + rem;
		rev = rev*10+rem;
		num = num/10;
	}
	cout<<"\nThe sum of number : "<<temp<<" is "<<sum;
	cout<<"\nThe reverse number is : "<<rev;
}
