//Assignment 16 : cin and cout:Menu Driven Program

#include<iostream>
using namespace std;

int main()
{
	cout<<"Menu Program"<<endl;
	cout<<"1. Even-Odd program\n2. Basic Salary\n3. Discount Price"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	int choice;
	cout<<"Enter your choice : ";
	cin>> choice ;
	cout<<"--------------------------------------------------------"<<endl;
	
	if(choice==1){
		cout<<"You have Choose Even-Odd Program"<<endl;
		int num ;
		cout<<"Enter any number : ";
		cin>>num;
		
		if (num%2==0){
			cout<<"The number "<<num<<" is even";
		}
		else{
			cout<<"The number "<<num<<" is odd";
		}
	}
	else if(choice==2){
		cout<<"You have Choose Total Salary Program"<<endl;
		int basic ;
		float da,ta,hra;
		cout<<"Enter basic salary of Employee : ";
		cin>>basic;
		
		if(basic<=5000){
			da = 0.1*basic;
			ta = 0.15*basic;
			hra = 0.2*basic;
		}
		else{
			da = 0.15*basic;
			ta = 0.2*basic;
			hra = 0.25*basic;
		}
		float totalSalary = basic+da+ta+hra;
		cout<<"\nBasic Salary of the Employee : "<<basic;
		cout<<"\nDaily Allowance of the Employee : "<<da;
		cout<<"\nTravelling Allowance of the Employee "<<ta;
		cout<<"\nHouse Rent Allowance for the Employee : "<<hra;
		cout<<"\nTotal Salary of the Employee : "<<totalSalary;
	}
	else if(choice==3){
		cout<<"You have choose Dicount Program"<<endl;
		int price;
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
		}
		
	else{
		cout<<"You have entered wrong input"<<endl;
	}

	return 0 ;
}
