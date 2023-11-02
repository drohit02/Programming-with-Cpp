//Struct program : Mutator and Accessor : Student

#include<stdio.h>
#include<string.h>

	struct Student {
		int roll_no;
		char name [20];
		float marks;
		
		void display()
		{
			printf("\nRoll no of the Student is : %d",getRollNo());
			printf("\nName of the Student is : %s",getName());
			printf("\nMarks of the Student is : %.2f",getMarks());
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
		s1.setRollNo(10);
		s1.setName("Sachin");
		s1.setMarks(87.78);
		
		s1.display();
		
		Student s2 ;
		
		s2.setRollNo(20);
		s2.setName("Virat");
		s2.setMarks(88.89);
		
		s2.display();
		
		return 0 ;
		
	}
