//Assignment 17 : cin and cout:Area of rectangle and circle

#include<iostream>
using namespace std;

int main(){
	
	int radius;
	float perimeter,area;
	cout<<"Enter the radius of the Circle : "<<endl;
	cin>>radius;
	perimeter = 2*3.14*radius;
	area = 3.14*radius*radius;
	
	cout<<"The perimeter of the circle is : "<<perimeter;
	cout<<"\nThe area of the circle is : "<<area;
	
	int length,breath;
	cout<<"\nEnter the length of the rectangle : "<<endl;
	cin>>length;
	cout<<"Enter the breath of the rectangle : "<<endl;
	cin>>breath;
	perimeter = 2*length*breath;
	area = length*breath;
	
	cout<<"The perimeter of the rectangle is : "<<perimeter;
	cout<<"\nThe area of the rectangle is : "<<area;
	 
	return 0;
	
}
