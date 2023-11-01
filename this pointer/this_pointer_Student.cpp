//Struct program using this pointer : Student

#include<string.h>
#include<stdio.h>

	struct Student{
		int roll_no ;
		char name[20];
		float marks ;
		
		void display()
		{
			printf("Student roll number is : %d",this->roll_no);
			printf("\nStudent name is : %s",this->name);
			printf("\nStudent Marks are : %.2f",this->marks);
		 } 
	};
	int main()
	{
		Student s1;
		
		s1.roll_no = 101 ;
		strcpy(s1.name,"Virat kohli");
		s1.marks = 87.78;
		
		s1.display();
		return 0 ;
	}
