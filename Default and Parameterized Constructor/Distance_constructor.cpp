//Struct program :Default and Parameterized Constructor:Distance

#include<stdio.h>
#include<string.h>

	struct Distance{
		int feet;
		int inches;
		
		void display(){
			printf("The Distance is : %d feet and %d inches\n",getFeet(),getInches());
		}
		//Default Constructor
		Distance(){
			this->feet = 1;
			this->inches = 1;
		}
		//Parameterized Constructor
		Distance(int feet,int inch) {
			this->feet = feet;
			this->inches = inch ;
		}
		void setFeet(int feet){
			this->feet = feet;
		}
		void setInches(int inches){
			this->inches= inches;
		}
		int getFeet(){
			return this->feet;
		}
		int getInches(){
			return this->inches;
		}
	};
	int main(){
		Distance dt1;
		dt1.display();
		
		Distance dt2(12,8);
		dt2.display();
		return 0;
	}
