//Assignment 20 : Polymorphism :Motor

#include<iostream>
#include<string.h>
using namespace std;

 struct Motor{
 	
 	char manufacturer [30];
 	int price;
 	float torque;
 	
 	//Display Function
 	virtual void display(){
 		cout<<"Manufacturer of Motor: "<<this->manufacturer<<endl;
 		cout<<"Price of the Motor: "<<this->price<<endl;
 		cout<<"Torque of the motor: "<<this->torque<<endl;
	 }
	 //Setter function
	 void setManufacturer(char * company){
	 	strcpy(this->manufacturer,company);
	 }
	 void setPrice(int price){
	 	this->price = price;
	 }
	 void setTorque(float torque){
	 	this->torque = torque;
	 }
	 //Getter function
	 char * getManufacturer(){
	 	return this->manufacturer;
	 }
	 int getPrice(){
	 	return this->price;
	 }
	 float getTorque(){
	 	return this->torque;
	 }
	 //Default Constructor
	 Motor(){
	 	cout<<"Motor - Default Constructor called"<<endl;
	 	strcpy(this->manufacturer,"Not Given");
	 	this->price = 0 ;
	 	this->torque = 0 ;
	 }
	 //parameterized constructor
	 Motor(char* company,int price,float torque){
	 	cout<<"Motor - parameterized Constructor called"<<endl;
	 	strcpy(this->manufacturer,company);
	 	this->price = price ;
	 	this->torque = torque;
	 }
 };
 struct CombustionMotor:public Motor{
 	char fuel [20];
 	int ports;
 	
 	void display(){
 		Motor::display();
 		cout<<"Fuel Type is : "<<this->fuel<<endl;
 		cout<<"Ports Of Motor : "<<this->ports<<endl;
	 }
	 //setter Function
	 void setFuel(char* fuelName){
	 	strcpy(this->fuel,fuelName);
	 }
	 void setPort(int port){
	 	this->ports = port ;
	 }
	 //Getter Function
	 char* getFuel(){
	 	return this->fuel;
	 }
	 int getPort(){
	 	return this->ports;
	 }
	 //Default Constructor
	 CombustionMotor():Motor(){
	 	cout<<"Combustion Motor - Default Constructor called"<<endl;
	 	strcpy(this->fuel,"Not Given");
	 	this->ports = 0 ;
	 }
	 //Parameterized  Constructor
	 CombustionMotor(char* company,int price,float torque,char* fuel,int port):Motor(company,price,torque){
	 	cout<<"Combustion Motor - Parameterized Constructor called"<<endl;
		strcpy(this->fuel,fuel);
	 	this->ports = port ;
	 }
 };
 struct ElectricMotor:public Motor{
 	float voltage;
 	int runHour;
 	
 	void display(){
 		Motor::display();
 		cout<<"Votage required for motor"<<this->voltage<<endl;
 		cout<<"Running Hours are "<<this->runHour<<endl;
	 }
	 //Setter function
	 void setVoltage(float volt){
	 	this->voltage = volt;
	 }
	 void setRunHour(int hours){
	 	this->runHour = hours ;
	 }
	 //Getter function
	 float getVoltage(){
	 	return this->voltage;
	 }
	 int getRunHour(){
	 	return this->runHour;
	 }
	 //Default Constructor
	 ElectricMotor():Motor(){
	 	cout<<"Electric Motor-Default Constructor called"<<endl;
	 	this->voltage = 0.0 ;
	 	this->runHour = 0 ;
	 }
	 //Parameterized Constructor
	 ElectricMotor(char* company,int price,float torque,float volt,int hour):Motor(company,price,torque){
	 	cout<<"Electric Motor - Parameterized Constructor called"<<endl;
		this->voltage = volt ;
	 	this->runHour = hour;
	 }
 };
 int main(){
 	Motor *mtp ;
 	
 	CombustionMotor cm1;
 	mtp = &cm1;
 	mtp->display();
 	cout<<"\n";
 	CombustionMotor cm2("KSB",12000,3445.65,"Petrol",17);
 	mtp = &cm2 ;
 	mtp->display();
 	cout<<"\n";
 	
 	ElectricMotor emt1;
 	mtp = &emt1;
 	mtp->display();
 	cout<<"\n";
 	ElectricMotor emt2("KUKA",120000,101.32,18.5,12);
 	mtp = &emt2;
 	mtp->display();
 	return 0;
 }
