//	Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)

#include<iostream>
using namespace std;

class A
{
	protected:
		int id,salary;
		string name,role,experience,comp_name,address,email;
		long long contact;
		
	public:
		void setter1()
		{
			cout << "Enter Employee Name : ";
			getline(cin,name);
			
			cout << "Enter Role of Employee :";
			getline(cin,role);
			
			cout << "Enter id :";
			cin >> id;	
		}
};
class B : public A
{
	public:
		void setter2()
		{
			cin.ignore();
			cout << "Enter Expeience (in years) :";
			getline(cin,experience);
			
			cout << "Enter Salary :";
			cin >> salary;	
		}
};
class C : public B
{
	public:
		void setter3()
		{
			cin.ignore();
		    cout << "Enter Company name :";
			getline(cin,comp_name);
			
			cout << "Enter Address of Employee :";
			getline(cin,address);
		}
		void getter1()
		{
			cout << "     Name           = "<<name<<endl;
			cout << "     Role           = "<<role<<endl;
			cout << "     Salary         = "<<salary<<endl;
		}
};
class D : public C
{
	public:
		void setter4()
		{
	
			cout << "Enter Email :";
			getline(cin,email);
			
			cout << "Enter Contact number :";
			cin >> contact;	
		}
		void getter2()
		{
			
			setter1();
			setter2();
			setter3();
			setter4();
			
			cout << endl<< "              Detail of Employee "<<endl;
			cout << "     Id             = "<<id<<endl;
			getter1();
			cout << "     Experience     = "<<experience<<endl;
			cout << "     Company name   = "<<comp_name<<endl;
			cout << "     Address        = "<<address<<endl;
			cout << "     Email          = "<<email<<endl;
			cout << "     Contact        = "<<contact<<endl;
		}
};
int main()
{
	D employee;
	employee.getter2();
	return 0;
}

	
	
