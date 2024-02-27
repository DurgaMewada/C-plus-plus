//	Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers
#include<iostream>
using namespace std;

class Highvalue
{
	int number;
	
	public :
	void set()
	{
		cout << "Enter number for compair : ";
		cin >> number;
		
	}
	bool operator>(	Highvalue a2)
	{
		if(this->number>a2.number)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
};
int main()
{
	Highvalue a1,a2,a3;
	a1.set();
	a2.set();
	

	if(a1>a2)
	{
		cout << "first value is max !";
	}
	else
	{
		cout << "second value is max !";
	}
	return 0;
}

