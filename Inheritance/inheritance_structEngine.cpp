//Assignment 19 : Inheritance Improved :Engine,Diesel Engine

#include<iostream>
#include<string.h>
using namespace std;

	struct Engine{
		char make [20];
		int power ;
		float torque;
		
		void display(){
			cout<<"Engine Made By : "<<this->make<<endl;
			cout<<"Power of Engine : "<<this->power<<" HP"<<endl;
			cout<<"Torque of Engine : "<<this->torque<<" Nm"<<endl;
		}
		void setMake(char * brand){
			strcpy(this->make,brand);
		}
		void setPower(int power){
			this->power = power; 
		}
		void setTorque(float torque){
			this->torque = torque ;
		}
		char * getMake(){
			this->make;
		}
		int getPower(){
			return this->power;
		}
		float getTorque(){
			return this->torque;
		}
		Engine(){
			strcpy(this->make,"Not Given");
			this->power = 0 ;
			this->torque = 0.0 ;
		}
		
		Engine(char * brand,int power,float torque){
			strcpy(this->make,brand);
			this->power = power ;
			this->torque = torque;
		}
		
	};
	struct DieselEngine:public Engine{
		int compRatio;
		char injection [20];
		
		void display(){
			Engine::display();
			cout<<"Compreation Ratio is : "<<this->compRatio<<endl;
			cout<<"Injection system is : "<<this->injection<<endl;
		}
		void setCompRation(int compRatio){
			this->compRatio = compRatio ;
		}
		void setInjection(char* injection){
			strcpy(this->injection,injection);
		}
		int getCompRatio(){
			return this->compRatio;
		}
		char *getInjection(){
			return this->injection;
		}
		DieselEngine():Engine(){
			this->compRatio = 0 ;
			strcpy(this->injection,"Not Given");
		}
		DieselEngine(char* brand,int power,float torque,int compRatio,char* injection):Engine(brand,power,torque){
			this->compRatio = compRatio ;
			strcpy(this->injection,injection);
		}
	};
	int main(){
		
		Engine eg1;
		eg1.display();
		cout<<endl;
		Engine eg2("Cummins",785,97.5);
		eg2.display();
		cout<<endl;
		DieselEngine dse1;
		dse1.display();
		cout<<endl;
		DieselEngine dse2("JCB Hydro",795,110.5,19,"Injector");
		dse2.display();
	}
