//Employee class defination

#include "employee.h"

	Employee::Employee()
	{
		this->eId = 0;
		strcpy(this->eName,"Not given");
		this->salary = 0 ;
	}
	Employee::Employee(int id,char* name,int salary)
	{
		this->eId = id ;
		strcpy(this->eName,name);
		this->salary = salary ;
	}
	
	void Employee::setID(int id)
	{
		this->eId = id;		
	}
	void Employee::setName(char* name)
	{
		strcpy(this->eName,name);
	}
	void Employee::setSalary(int salary)
	{
		this->salary = salary;
	}
			
	int Employee::getID()
	{
		return this->eId;
	}
	char* Employee::getName()
	{
		return this->eName;
	}
	int Employee::getSalary()
	{
		return this->salary;
	}
	void Employee::display()
	{
		
    	cout << "|" <<" " << "     |         " << this->eId << "            |        " << this->eName << "             |          " << this->salary << "              |    \n";


	}
