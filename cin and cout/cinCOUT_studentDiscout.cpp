//Assignment 16 : cin and cout :Student discout

#include<iostream>
using namespace std;

int main(){
	
	int isStudent,price;
	cout<<"Are You Student ?(1. Yes / 2. No) : ";
	cin>>isStudent;
	
	cout<<"Enter the Price of the item : ";
	cin>>price;
	
	float dis_price;
	
	if(isStudent==1 || isStudent==2)
	{
		
		if(isStudent==1){
			
			cout<<"\nYou are a Student and Worth of the Item purchased is : "<<price;
			
			if(price<=500){
				cout<<"\nYou have received 10% discount";
				dis_price = price - (price*0.1);
			}
			else{
				cout<<"\nYou have received 20% discount";
				dis_price = price - (price*0.2);
			}
		}
		else{
			cout<<"\nYou are a Not Student and Worth of the Item purchased is : "<<price;
			
			if(price>=600){
				cout<<"\nYou have received 15% discount";
				dis_price = price - (price*0.15);
			}
			else{
				cout<<"\nYou have received No discount";
				dis_price = price;
			}	
		}		
	}		
    else{
    	cout<<"You have entered the wrong input";
	}
	cout<<"\nFinal Price to Pay is : "<<dis_price;
	return 0 ;
}
