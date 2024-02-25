//  Q.1 Write a Program to implement exception handling mechanism for different types of scenarios

#include<iostream>
using namespace std;

int main()
{
	// a number cannot be divided by zero
	
	int a,b;
	cout << "       Number cannot divided by zero !"<<endl;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	
	try
	{
		if(b!=0)
		{
			cout << "Your ans is : " << a/b;
		}
		else
		{
			throw b;
		}
	}
	catch(...)
	{
		cout << "Number can not divisible by zero ! ";
	}
	
	//  a person cannot be able to vote if his/her age is less than 18
	
	cout << endl << endl << "       Voting age verification ! "<< endl;
	int age;
	cout << "Enter age : ";
	cin >> age;
	
	try
	{
		if(age>=18 && age<=100)
		{
			cout << "You eligible for voting !";
		}
		else
		{
			throw age;
		}
	} 
	catch(...)
	{
		cout << "You can not eligible for voting !";
	}
	
	// a password cannot be validated if it doesn’t contains an uppercase letter
	
	char password[32];
	int i,l,check=0;
	cout <<endl<<endl<< "      Password validation (Requirment Uppercase letter) ! "<<endl;
	start:
	cout << "Enter password : ";
	cin  >> password;
	
	l = strlen(password);
	for(i=0; i<l; i++)
	{
		if(password[i]>=65 && password[i]<=90)
		{
			check= 1;
		}
	}
	try
	{
		if(check==1)
		{
			cout << "Your password is valid! ";
		}
		else
		{
			throw password;
		}
	}
	catch(...)
	{
		cout << "Enter valid password ! " << endl << endl;
		goto start;
	}
	
}