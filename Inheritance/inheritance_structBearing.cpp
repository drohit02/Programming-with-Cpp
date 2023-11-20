//Assignment 19 : Inheritance Improved:Bearing

#include<iostream>
#include<string.h>
using namespace std;

	struct Bearing{
		char brand [20];
		int series ; 
		int price ;
		
		void display(){
			cout<<"Brand of the Bearing : "<<this->brand<<endl;
			cout<<"Series of the Bearing : "<<this->series<<endl;
			cout<<"price of the Bearing : "<<this->price<<endl;
		}
		void setBrand(char* company){
			
		}
	}; 
