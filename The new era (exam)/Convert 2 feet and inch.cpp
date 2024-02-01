//	Q.1 Write a Program to create a class to read and add two distances.
//	For example,
//	Input:
//	input1 => feet: 8, inch: 16
//	input2 => feet: 4, inch: 14
//	
//	Output:
//	14 feet 6 inch

#include<iostream>
using namespace std;

class Program 
{
	int feet1,inch1,feet2,inch2;
	int feet,inch;
	
	public: 
	
	void input()
	{
		cout << "Enter (1)feet =";
		cin >> feet1;
		
		cout << "Enter (1)inch =";
		cin >> inch1;
		
		cout << "Enter (2)feet =";
		cin >> feet2;
		
		cout << "Enter (2)inch =";
		cin >> inch2;
	}
	
	void convert()
	{
		feet = feet1 + feet2;
		inch = inch1 + inch2;
	
	    feet=feet+(inch/12);
	    inch=inch%12;

        cout << endl << "   Convert ";
		cout << feet <<":"<< inch;
    }

};

int main()
{
	Program p;
	p.input();
	p.convert();

}