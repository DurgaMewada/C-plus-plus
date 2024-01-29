//	Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//	- emp_id
//	- emp_name
//	- emp_age
//	- emp_role
//	- emp_salary
//	- emp_city
//	- emp_experience
//	- emp_company_name

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		int emp_id,emp_age,emp_salary,emp_experience;
		string emp_name,emp_role,emp_city,emp_company_name;
		
		void input()
		{
			cout << "Enter Name:";
			cin >> emp_name;
			cout << "Enter Role :";
			cin >> emp_role;
			cout <<"Enter Role :";
			cin >> emp_city;
			cout << 
		}
		
		void output()
		{
			cout << emp_id << endl;
			cout << emp_name << endl;
		}
};
int main()
{
	Employee e[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<endl;
		e[i].input();
	}
	
	for(i=0;i<5;i++)
	{
		cout<<endl;
		e[i].output();
	}
	
	return 0;
}