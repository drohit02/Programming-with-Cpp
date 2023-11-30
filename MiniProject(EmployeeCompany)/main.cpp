#include <iostream>
#include "company.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	Company cmp(5);
	int choice;	
	while(choice!=5)
	{
		cout<<"\n---------------------- Company Service For Employee ------------------------------"<<endl;
		cout<<" 1. Add Employee\n 2. Search Employee\n 3. Delete Employee\n 4. All Employee"<<endl;
		cout<<"----------------------------------------------------------------------------------"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>choice;
		cout<<"----------------------------------------------------------------------------------"<<endl;
		
		switch(choice)
		{
			case 1:
				{
					cout<<"You wish to add employee...."<<endl;
					int id;
					char name [20];
					int salary;
					cout<<"Enter Employee id : ";cin>>id;
					cout<<"Enter Employee name : ";cin>>name;
					cout<<"Enter Employee Salary : ";cin>>salary;
					cout<<endl;
					Employee emp1(id,name,salary);
					if(cmp.addEmployee(emp1))
					{
						cout<<"\nEmployee Added Successfully..."<<endl;
					}
					else{
						cout<<"\Employee is not addded...."<<endl;
					}
				}
					break;	
			case 2:
				{
					cout<<"Are you curious about Employee.I will find him for You...."<<endl;
					int id;
					cout<<"Enter the Employee Id for Searching Employee : ";cin>>id;
					if(cmp.searchEmployee(id))
					{
						cout<<"\nInforamtion Retrieve Succsessfully......"<<endl;
					}
					else
					{
						cout<<"\nInforamtion Retrieve failed......"<<endl;
					}
				}
				break;
			case 3:
				{
					cout<<"Want to remove someone..To Bad..Let me do it..."<<endl;
					int id;
					cout<<"Enter the employee id for removal : ";cin>>id;
					if(cmp.deleteEmployee(id))
					{
						cout<<"Removal Successfull...."<<endl;
					}
					else
					{
						cout<<"Removal unsuceessfull....."<<endl;
					}
				}
				break;
			case 4:
				{
					cout<<"You wish to see valuable assets.Here there are...."<<endl;
					cmp.displayEmployee();
					cout << "-------------------------------------------------------------------------------------------\n";
				}
				break;
				
			default :
				cout<<"Invalid Choice..."<<endl;
				break;	
		}
	}
	return 0;
}
