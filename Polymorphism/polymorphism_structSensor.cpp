//Assignment 20 : Polymorphism :Sensor

#include<iostream>
#include<string.h>
using namespace std;

	struct Sensor{
		char brand [20];
		int price ;
		int voltage;
		
		//Display Function
		virtual void display(){
			cout<<"Brand Name is : "<<this->brand<<endl;
			cout<<"Price of sensor is : "<<this->price<<endl;
			cout<<"Voltage of the Sensor is : "<<this->voltage<<" volt"<<endl;
		}
		//Setter function
		void setBrand(char* brand){
			strcpy(this->brand,brand);
		}
		void setPrice(int price){
			this->price = price ;
		}
		void setVoltage(int volt){
			this->voltage = volt;
		}
		//Getter function
		char * getBrand(){
			return this->brand;
		}
		int getPrice(){
			return this->price;
		}
		int getVoltage(){
			return this->voltage;
		}
		//Default Constructor
		Sensor(){
			strcpy(this->brand,"Not Given");
			this->price = 0;
			this->voltage = 0 ;
		}
		//Parameterized Constructor
		Sensor(char* brand,int price,int volt){
			strcpy(this->brand,brand);
			this->price = price ;
			this->voltage = volt ;
			
		}
	};
	
	struct LightSensor:public Sensor{
		int sensitivity;
		int wvLength;
		
		void display(){
			Sensor::display();
			cout<<"Sensitivity of Sensor : "<<this->sensitivity<<" ohm/volt"<<endl;
			cout<<"Wavelength of Sensor : "<<this->wvLength<<" nm"<<endl;
		}
		//Setter function
		void setSensitivity(int sense){
			this->sensitivity = sense ;
		}
		void setWvLength(int length){
			this->wvLength = length ;
		}
		//Getter function
		int getSensitivity(){
			return this->sensitivity;
		}
		int getWvLength(){
			return this->wvLength;
		}
		//Default Constructor
		LightSensor():Sensor(){
			this->sensitivity = 0 ;
			this->wvLength =  0 ;
		}
		//Parameterized Constructor
		LightSensor(char* brand,int price,int volt,int sense,int length):Sensor(brand,price,volt){
			this->sensitivity = sense ;
			this->wvLength = length ;
		}
	};
	int main(){
		Sensor *snr;
				
		LightSensor ls1;
		snr = &ls1;
		snr->display();
		cout<<"\n";
		
		LightSensor ls2("Phinix",800,18,450,700);
		snr = &ls2;
		snr->display();
		return 0 ;
	}
