//	Q. Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
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
			cin.ignore();
			cout << "Enter Name:";
		    getline(cin,emp_name);
			
			cout << "Enter Role :";
			getline(cin,emp_role);
			
			cout <<"Enter City :";
			getline(cin,emp_city);
			
			cout <<"Enter Company name  :";
			getline(cin,emp_company_name);
		
			cout <<"Enter id of employee  :";
			cin >> emp_id;
			cout <<"Enter Age :";
			cin >> emp_age;
			cout <<"Enter Salary :";
			cin >> emp_salary ;
			cout <<"Enter Experience :";
			cin >> emp_experience;
			
		}
		
		void output()
		{
			cout << "Name         :"<< emp_name << endl;
			cout << "ID           :"<< emp_id << endl;
			cout << "Age          :"<< emp_age << endl;
			cout << "City         :"<< emp_city << endl;
			cout << "Role         :"<< emp_role << endl;
			cout << "Experience   :"<< emp_experience << endl;
			cout << "Salary       :"<< emp_salary << endl;
			cout << "Company name :"<< emp_company_name << endl;
		}
};
int main()
{
	
	int i,n;

	cout << "Enter no. of Employee ";
	cin >> n;
	Employee e[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Employee " <<i+1;
		cout << endl;
		e[i].input();
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Employee " <<i+1;
		cout<<endl;
		e[i].output();
	}
	
	return 0;
}
