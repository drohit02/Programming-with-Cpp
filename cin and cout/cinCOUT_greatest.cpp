//Assignment 17:cin and cout: finding greatest of the 3 number

#include<iostream>
using namespace std;

int main(){
	int nm1,nm2,nm3,max;
	
	cout<<"Enter the number 1 : ";
	cin>>nm1;
	
	cout<<"Enter the number 2 : ";
	cin>>nm2;
	
	cout<<"Enter the number 3 : ";
	cin>>nm3;
	
	if(nm1>nm2){
		if(nm1>nm3){
			cout<<"The greatest among number is "<<nm1;
		}
		else{
			cout<<"The greatest among number is "<<nm3;
		}
	}
	else if(nm2>nm3){
		cout<<"The greatest among is "<<nm2;
		
	}
	else{
			cout<<"The greatest among is "<<nm3;
		}
	
	max = nm1>nm2?(nm1>nm3?nm1:nm3):(nm2>nm3?nm2:nm3);
	cout<<"\nthe greatest among three number is : "<<max;
	return 0 ;
}
