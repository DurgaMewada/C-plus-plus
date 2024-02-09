//	Q.1 Write a Program to make a Railway Reservation System.
//	Requirements:
//	(A) User Input: 
//	- Train Number
//	- Train Name
//	- Source
//	- Destination
//	- Train Time
//	(B) Display Records: 
//	- All Records
//	- By Searching Train Number
//	(C) Minimum 3 Input Train Records

#include<iostream>
#include<string.h>
using namespace std;

class Train
{
	string train_name,train_destination,train_time;
	static string train_source;
	
	public:
		int train_number;
		void input()
		{
			cin.ignore();
			cout << "Enter Name of train :";
			getline(cin,train_name);
			
			cout << "Enter Destination of train :";
			getline(cin,train_destination);
			
			cout << "Enter time of train  (hh : mm) :";
			getline(cin,train_time);
			
			cout <<"Enter Number of train:";
			cin >> train_number;		
		}
		void output()
		{
			cout << endl << "   ---------  Detils of train !!  ----------" << endl;
			
			cout << "      Train number            :" << train_number <<endl;
			cout << "      Train name              :" << train_name <<endl;
			cout << "      Train source            :" << train_source <<endl;
			cout << "      Train destination       :" << train_destination <<endl;
			cout << "      Train time              :" << train_time <<endl;
	
		}
};
string Train:: train_source="Surat";
int main()
{
	int n;
	cout << "Enter number of train for there detail :";
	cin >> n;

	Train t[n];
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		t[i].input();
		
	}  
	int no;
	cout << endl << "------Enter train number to search for detail :";
	cin >> no;
	for (int i=0;i<n;i++)
	{
		if(no==t[i].train_number)
		{
			t[i].output();
		}
	}
	return 0;
}