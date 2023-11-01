//struct in cpp:Student struct

#include <stdio.h>
#include <string.h>

struct Student
{
	int roll;
	char name [20];
	float marks;
};
void display(Student * );
int main()
{
	Student s1 ;
	s1.roll = 101 ;
	strcpy(s1.name,"Sachin");
	s1.marks = 89.90 ;
	
	display(&s1);
	return 0;
}
void display(Student * ptr)
{
	printf("Roll number of student is : %d",ptr -> roll);
	printf("\nName of the student is : %s",ptr -> name);
	printf("\nMarks of the student is : %.2f",ptr ->marks);
	
}
