//Company class defination
#include "employee.h"

	class Company
	{
		int size;
		int index;
		Employee *ep;
		
		public:
			Company(int);
			bool isEmpty();
			bool isFull();
			bool addEmployee(Employee &);
			bool searchEmployee(int);
			bool deleteEmployee(int);
			void displayEmployee();
			~Company();
		
	};


