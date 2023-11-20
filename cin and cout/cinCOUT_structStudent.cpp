//Assignment 17 : cin and cout :Struct program :Student

#include<iostream>
#include<string.h>
using namespace std;

	struct Student {
		int roll_no;
		char name [20];
		float marks;
		
		//Default Constructor
		
		Student(){
			this->roll_no = 0 ;
			strcpy(this->name,"Not Given");
			this->marks = 0.0;
		}
		//Parameterized Constructor
		
		Student(int rollNo,char * name,float marks){
			this->roll_no = rollNo;
			strcpy(this->name,name);
			this->marks= marks;
		}
		void display()
		{
			cout<<"\nRoll no of the Student is : "<<getRollNo();
			cout<<"\nName of the Student is : "<<getName();
			cout<<"\nMarks of the Student is : "<<getMarks();
		}
		void setRollNo(int num)
		{
			this->roll_no = num ;
		}
		void setName(char name []) 
		{
			strcpy(this->name,name);
		}
		void setMarks(float marks)
		{
			this->marks = marks ;
		}
		int getRollNo()
		{
			return this->roll_no;
		}
		char * getName()
		{
			return this->name;
		}
		float getMarks()
		{
			return this->marks;
		}
	};
	int main()
	{
		Student s1;
		s1.display();
		
		Student s2(201,"Virat Kohli",87.80) ;
		s2.display();
		return 0 ;
		
	}
