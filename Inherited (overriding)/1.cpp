//	Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//	- Class Admin -> Class Manager
//	- Class Manager -> Class Employee
//	- Class Admin has the following members:
//	company_name
//	manager_salary
//	employee_salary
//	total_staff
//	total_annual_revenue
//	can_terminate
//	- use all attributes accessibility in the parent class and child class properly.
//	- override a method myAccess() in both child classes to display all parent class members' values accordingly.

#include<iostream>
using namespace std;

class Admin 
{
	protected:
		int manager_salary,employee_salary,total_staff,total_annual_revenue;
    	string company_name = "SD Sons";
    	
    public:
		void set()
		{
			cout << "Enter Total Annual Revenue : ";
			cin >> total_annual_revenue;
			cout << "Enter Manager salary  : ";
			cin >> manager_salary;
		}
		void myAccess()
		{
			cout <<endl<< "     Details Admin have : "<<endl;
			cout << "Total Annual Revenue : "<< total_annual_revenue<<endl;
			cout << "Manager salary       : "<< manager_salary<<endl;
		}
	
};
class Manager : public Admin
{
       public:
		void set()
		{
			cout << "Enter Total Staff : ";
			cin >> total_staff;
			
		}
		void myAccess()
		{
			cout <<endl<< "     Details Manager have : "<<endl;
			cout << "Total Staff        : "<< total_staff<<endl;
		}	
};
class Employee : public Manager
{
	public:
		void set()
		{
			cout << "Enter Employee Salary : ";
			cin >> employee_salary;
			
		}
		void myAccess()
		{
			cout <<endl<< "     Details Employee have : "<<endl;
			cout << "Employee Salary    : "<< total_staff<<endl;
		}	
	
};
int main()
{
	Admin a;
	a.set();
	a.myAccess();
	
	Manager m;
	m.set();
	m.myAccess();
	
	Employee e;
	e.set();
	e.myAccess();
	
	return 0;
}