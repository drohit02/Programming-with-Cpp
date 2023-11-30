//Company Class Defination

#include "company.h"

	Company::Company(int size)
	{
		this->size = size ;
		this->index = -1 ;
		this->ep = new Employee[size];
	}
	bool Company::isEmpty()
	{
		if(this->index == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool Company::isFull()
	{
		if(this->index == this->size-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool Company::addEmployee(Employee &empObj)
	{
		if(isFull())
		{
			cout<<"Company is full..No space for new Emloyee"<<endl;
			return false;
		}
		else
		{
			ep[++index] = empObj;
			return true;
		}
	}
	bool Company::searchEmployee(int searchEmp)
	{
		if(isEmpty())
		{
			cout<<"Comapany is Empty..No Employee is present"<<endl;
			return false;
		}
		else
		{
			int i;
			for(i=0;i<=index;i++)
			{
				if(ep[i].getID()==searchEmp)
				{
					cout<<"Employee found......."<<endl;
					ep[i].display();
					return true;
				}
			}
			cout<<"Employee is not Here...."<<endl;
			return false;
		}
	}
	bool Company::deleteEmployee(int deleteEmp)
	{
		if(isEmpty())
		{
			cout<<"Company is Empty.No one is here"<<endl;
			return false;
		}
		else
		{
			int i;
			for(i=0;i<=index;i++)
			{
				if(ep[i].getID()==deleteEmp)
				{
					break;
				}
			}
			if(i>index)
			{
				cout<<"Employee is not found...."<<endl;
				return false;
			}
			else
			{
				while(i<index)
				{
					ep[i] = ep[i+1];
					i++; 
				}
				index--;
			}
			return true;
		}
	}
	void Company::displayEmployee()
	{
		if(isEmpty())
		{
			cout<<"Company is Empty...."<<endl;
			return;
		}
		else
		{
			cout << "--------------------------------------------------------------------------------------------\n";
    		cout << "|  Sr. |     Empolyee Id        |      Employee Name        |     Employee Salary         |\n";
    		
			int i,j;
			for(i=0;i<=index;i++)
			{
				cout <<"--------------------------------------------------------------------------------------------\n";
				ep[i].display();
			}
		}
	}
	Company::~Company()
	{
		if(ep!=NULL)
		{
			cout<<"Destructor Called..."<<endl;
			delete []ep;
		}
	}
	
