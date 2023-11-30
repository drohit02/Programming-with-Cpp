//Employee class defination

#include<iostream>
#include<string.h>
using namespace std;


	class Employee{
		int eId;
		char eName [20];
		int salary;
		
		public:
			Employee();
			Employee(int,char*,int);
			void setID(int);
			void setName(char*);
			void setSalary(int);
			
			int getID();
			char* getName();
			int getSalary();
			void display();
	};
