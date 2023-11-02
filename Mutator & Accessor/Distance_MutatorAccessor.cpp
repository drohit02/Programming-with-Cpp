//Struct program :Mutator and Accessor:Distance

#include<stdio.h>
#include<string.h>

	struct Distance{
		int feet;
		int inches;
		
		void display(){
			printf("The Distance is : %d feet and %d inches",getFeet(),getInches());
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
		
		dt1.setFeet(12);
		dt1.setInches(8);
		
		dt1.display();
		return 0;
	}
