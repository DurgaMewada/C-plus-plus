//	Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//	- stu_id
//	- stu_name
//	- stu_age
//	- stu_course
//	- stu_city
//	- stu_email
//	- stu_college

#include<iostream>
using namespace std;

class Student 
{ 
    int stu_id,stu_age;
    string stu_name,stu_course,stu_city,stu_email,stu_college;
    
    public:
    	void input()
    	{
    	   cin.ignore();
		   cout << "Enter Name of stundent : ";
		   getline(cin,stu_name);
		
		   cout << "Enter Course  : ";
		   getline(cin,stu_course);
		
		   cout << "Enter City : ";
		   getline(cin,stu_city);
		   
		   cout << "Enter Email : ";
		   getline(cin,stu_email);
		   
		   cout << "Enter College : ";
		   getline(cin,stu_college);
		   
		   cout << "Enter Id of stundent :";
		   cin >> stu_id;
		   
		   cout << "Enter Age of stundent :";
		   cin >> stu_age;
		
		}
		void output()
		{
			cout << "Name       :" << stu_name <<endl;
			cout << "Id         :" << stu_id <<endl;
			cout << "Age        :" << stu_age <<endl;
			cout << "Course     :" << stu_course <<endl;
			cout << "City       :" << stu_city <<endl;
			cout << "Email      :" << stu_email <<endl;
			cout << "College    :" << stu_college <<endl;
			
		}
};
int main()
{
	
	int i,n;
	cout << "Enter no. of Student : ";
	cin >> n;
    Student s[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Student " <<i+1;
		cout << endl;
		s[i].input();
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Student " <<i+1;
		cout<<endl;
		s[i].output();
	}
	
	return 0;
}