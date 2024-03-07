// Q.1 Write a Program to create a class that illustrates the concept of handling 
// all types of exceptions using general exceptions.

#include<iostream>
using namespace std;

class Multiply
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter a : ";
		cin>>a;
		cout<<"Enter b : ";
		cin>>b;
		
		try
		{
			if(b==0 || b<0 || a<0 || a==0)
			{
				throw b;
				throw a;
			}
			else
			{
				cout<<"Multiply :"<<a*b<<endl;
			}
		}
		catch(...)
		{
			cout<<"If Any number is 0 then ans will be 0 input getter no by 0 ";
		}
	}
	
};

int main()
{
	Multiply m;
	m.set();


		
	return 0;
}

