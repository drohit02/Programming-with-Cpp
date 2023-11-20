//Assignment 18:Inheritance:Shape

#include<iostream>
#include<string.h>
using namespace std;

	struct Shape{
		int parameter;
		
		void display(){
			cout<<"Shape Object is cretaed"<<endl;
		}
		
		Shape(){
			cout<<"No Argument is send : No Shape Determined"<<endl;
		}
	};
	struct Circle:public Shape{
	
		void display(){
			cout<<"One Parmeter Received : Shape is Circle"<<endl;
			cout<<"Radius of the circle is :"<<this->parameter<<endl;
		}
		Circle(int radius){
			this->parameter = radius;
		}
	};
	struct Rectangle:public Shape{
		int breath;
		void display(){
			cout<<"Two parameter are Received : Shape is Reactangle"<<endl;
			cout<<"length of Reactangle : "<<this->breath<<endl;
		}
		Rectangle(int length,int breath){
			this->parameter = length ;
			this->breath = breath ;
		}
	};
	int main(){
		Shape s1;
		s1.display();
		cout<<"\n";
		
		Circle c1(5);
		c1.display();
		cout<<"\n";
		
		Rectangle rt1(10,5);
		rt1.display();
	
		return 0;
	}
