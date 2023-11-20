//Assignment 17:cin and cout:discount

#include<iostream>
using namespace std ;

int main(){
	int price ;
	float dis_price;
	
	cout<<"Enter the price of the item : ";
	cin>>price ;
	
	if (price<=500){
		dis_price = price - 0.1*price;
	}
	else if (price >500 && price <=1000){
		dis_price = price - 0.15*price;
	}
	else if (price >1000 && price <=2000){
		dis_price = price - 0.2*price;
	}
	else{
		dis_price = price - 0.25*price;
	}
	cout<<"\nFinal price of the item is : "<<dis_price;
	return 0 ;
}
