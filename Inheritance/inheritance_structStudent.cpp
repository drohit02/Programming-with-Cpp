//Assignment 19:Inheritance Improved:Student and placed student

#include<iostream>
#include<string.h>
using namespace std;

	struct Student{
		int stdId;
		char batchId [20];
		char name [20];
		int dist_travel;
		
		void display(){
			cout<<"Student Id is : "<<this->stdId<<endl;
			cout<<"Batch Id is : "<<this->batchId<<endl;
			cout<<"name of the student is : "<<this->name<<endl;
			cout<<"Distance travelled by Student :"<<this->dist_travel<<endl;
		}
		void setStudentId(int id){
			this->stdId = id;
		}
		void setBatchId(char * batch){
			strcpy(this->batchId,batch);
		}
		void setName(char * name){
			strcpy(this->name,name);
		}
		void setDistanceTravel(int distance){
			this->dist_travel = distance;
		}
		int getStudentId(){
			return this->stdId;
		}
		char* getBatchId(){
			return this->batchId;
		}
		char* getName(){
			return this->name;
		}
		int getDistanceTravel(){
			return this->dist_travel;
		}
		Student(){
			this->stdId = 0 ;
			strcpy(this->batchId,"Not Given");
			strcpy(this->name,"Not Given");
			this->dist_travel = 0 ;
		}
		Student(int id,char* batch,char* name,int distance){
			this->stdId = id;
			strcpy(this->batchId,batch);
			strcpy(this->name,name);
			this->dist_travel = distance;
		}
	};
	struct PlacedStudent:public Student{
		char compName [20];
		char post [20];
		
		void display(){
		   Student::display();
		   cout<<"Student Placed in Company : "<<this->compName<<endl;
		   cout<<"Desiganation of Student in Company : "<<this->post<<endl;
		}
		void setCompanyName(char * company){
			strcpy(this->compName,company);
		}
		void setDesiganation(char* desiganation){
			strcpy(this->compName,desiganation);
		}
		char* getCompanyName(){
			return this->compName;
		}
		char* getDesiganation(){
			return this->post;
		}
		PlacedStudent():Student(){
			strcpy(this->compName,"Not Given");
			strcpy(this->post,"Not Given");
		}
		PlacedStudent(int id,char* batch,char*name,int distance,char* company,char* desiganation):Student(id,batch,name,distance){
			strcpy(this->compName,company);
			strcpy(this->post,desiganation);	
		}
	};
	int main(){
		Student st1;
		st1.display();
		cout<<endl;
		Student st2(33101,"31/01/23/JAVA","Rohit",287);
		st2.display();
		cout<<endl;
		
		PlacedStudent pst1;
		pst1.display();
		cout<<endl;
		PlacedStudent pst2(26880,"20/10/23/python","Virat",900,"BCCI","Emperoar");
		pst2.display();
		return 0;
	}
