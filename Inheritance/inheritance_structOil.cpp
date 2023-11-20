//Assignment 19:Inheritance Improved :Oil,Hydraulic Oil,Engine Oil

#include<iostream>
#include<string.h>
using namespace std;

	struct Oil{
		char source [20];
		float viscosity ;
		char name [20];
		int price;
		
		void display(){
			cout<<"Source of the Oil : "<<this->source<<endl;
			cout<<"Viscosity of the Oil : "<<this->viscosity<<" Ns/m2"<<endl;
			cout<<"Name/Brand of the Oil is : "<<this->name<<endl;
			cout<<"Price of the Oil/Barrel  :"<<this->price<<endl;
		}
		void setSource(char * origin){
			strcpy(this->source,origin);
		}
		void setViscosity(float viscous){
			this->viscosity = viscous;
		}
		void setName(char * name){
			strcpy(this->name,name);
		}
		void setPrice(int price){
			this->price = price; 
		}
		char* getSource(){
			return this->source;
		}
		float getViscosity(){
			return this->viscosity;
		}
		char * getName(){
			return this->name;
		}
		int getrice(int price){
			return this->price; 
		}
		Oil(){
			strcpy(this->source,"Not Given");
			this->viscosity = 0.0;
			strcpy(this->name,"Not Given");
			this->price = 0 ;
		}
		Oil(char* origin,float viscous,char* name,int price){
			strcpy(this->source,origin);
			this->viscosity = viscous;
			strcpy(this->name,name);
			this->price = price ;
		}
	};
	struct EngineOil:public Oil{
		float mileage;
		
		void display(){
			Oil::display();
			cout<<"Mileage Given by Engine Oil : "<<this->mileage<<" mpg"<<endl;
		}
		void setMileage(float avg){
			this->mileage = avg ;
		}
		float getMileage(){
			return this->mileage;
		}
		EngineOil():Oil(){
			this->mileage = 0.0;
		}
		EngineOil(char* origin,float viscous,char* name,int price,float mileage):Oil(origin,viscous,name,price){
			this->mileage = mileage;
		}
	};
	int main(){
		Oil o1;
		o1.display();
		cout<<endl;
		Oil o2("Mine",100,"Aspin 46",56000);
		o2.display();
		cout<<endl;
		EngineOil eo1;
		eo1.display();
		cout<<endl;
		EngineOil eo2("Cruid Oil Well",120,"Catrol 220",78000,75000);
		eo2.display();
		return 0 ;
	}
