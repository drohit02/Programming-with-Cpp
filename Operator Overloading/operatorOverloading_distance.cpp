//Assignment 14: Operator Overloading using member function and the non-member function : Distance

#include<stdio.h>
#include<string.h>

	struct Distance{ 
	
		//Attrinutes 
		int feet;
		int inches;
		
		//Display function
		void display(){
			printf("Distance is :%d feet and %d inches",getFeet(),getInches());
		}
		//setter function
		void setFeet(int feet){
			this->feet = feet ;
		}
		void setInches(int inch){
			this->inches = inch ;
		}
		//getter function
		int getFeet(){
			return this->feet;
		}
		int getInches(){
			return this->inches;
		}
		//Default Constructor
		Distance(){
			this->feet = 0;
			this->inches = 0 ; 
		}
		//Parameterized Constructor
		Distance(int feet,int inch){
			this->feet = feet ;
			this->inches = inch ;
		}
		//Operator Overloading : Addition of Distance parameter
		Distance operator+(int nm){
			Distance temp;
			
			temp.feet = this->feet + nm ;
			temp.inches = this->inches + nm ;
			
			return temp;
		}
		Distance operator+(Distance dtObj){
			Distance temp ;
			
			temp.feet = this->feet + dtObj.feet;
			temp.inches = this->inches + dtObj.inches ;
			
			return temp;
		}
		//Operator Overloading : Substraction of Distance parameter
		Distance operator-(int nm){
			Distance temp;
			
			temp.feet = this->feet - nm ;
			temp.inches = this->inches - nm ;
			
			return temp;
		}
		Distance operator-(Distance dtObj){
			Distance temp ;
			
			temp.feet = this->feet - dtObj.feet;
			temp.inches = this->inches - dtObj.inches ;
			
			return temp;
		}
		//Operator Overloading : Multiplication of Distance parameter
		Distance operator*(int nm){
			Distance temp;
			
			temp.feet = this->feet * nm ;
			temp.inches = this->inches * nm ;
			
			return temp;
		}
		Distance operator*(Distance dtObj){
			Distance temp ;
			
			temp.feet = this->feet * dtObj.feet;
			temp.inches = this->inches * dtObj.inches ;
			
			return temp;
		}
		//Operator Overloading : Division of Distance parameter
		Distance operator/(int nm){
			Distance temp;
			
			temp.feet = this->feet / nm ;
			temp.inches = this->inches / nm ;
			
			return temp;
		}
		Distance operator/(Distance dtObj){
			Distance temp ;
			
			temp.feet = this->feet / dtObj.feet;
			temp.inches = this->inches / dtObj.inches ;
			
			return temp;
		}
	};
	Distance operator+(int,Distance);
	Distance operator-(int,Distance);
	Distance operator*(int,Distance);
	Distance operator/(int,Distance);
	int main(){
		
		int num1 = 10 ;
		int num2 = 20 ;
		int num3 = 15 ;
		int num4 = 25 ;
		
		Distance dt1(num1,num2);
		dt1.display();
		printf("\n");
		Distance dt2(num3,num4);
		dt1.display();
		printf("\n");
		
		Distance dt3,dt4;
		dt3 = dt1+dt2; //Compiler Interpret : dt1.add(dt2);
		dt3.display();
		printf("\n");
		
		dt4 = dt1-num1; //Compiler Interpret : dt1.sub(dt2);
		dt4.display();
		printf("\n");
		
		dt3 = dt1*dt2; //Compiler Intepret :dt1.multi(dt2);
		dt3.display();
		printf("\n");
		
		dt4 = dt1/num1; //Compiler Interpret dt1.div(num1)
		dt4.display();
	}
	//Operator Overloading : Using Non Member function : Addition
	Distance operator+(int num,Distance dtObj){
		Distance temp ;
		temp.feet = dtObj.feet + num;
		temp.inches = dtObj.inches + num ;
		return temp;
	}
	//Operator Overloading : Using Non Member function : Substraction
	Distance operator-(int num,Distance dtObj){
		Distance temp ;
		temp.feet = dtObj.feet - num;
		temp.inches = dtObj.inches - num ;
		return temp;
	}
	//Operator Overloading : Using Non Member function : Multiplication
	Distance operator*(int num,Distance dtObj){
		Distance temp ;
		temp.feet = dtObj.feet * num;
		temp.inches = dtObj.inches * num ;
		return temp;
	}
	//Operator Overloading : Using Non Member function : Division
	Distance operator/(int num,Distance dtObj){
		Distance temp ;
		temp.feet = dtObj.feet / num;
		temp.inches = dtObj.inches / num ;
		return temp;
	}

