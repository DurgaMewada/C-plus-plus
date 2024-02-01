//	Q. Write a program to read and print distance for feet and inches.
//	For example,
//	input : 
//	Enter feet: 6
//	Enter inches: 40
//	
//	output: Feet - 9, Inch - 4

#include<iostream>
using namespace std;

main()
{
	int x;
	cout << "First year :";
	cin >> x;
	int y;
	cout << "Second year :";
	cin >> y;

	int year = y - x;
	int total = (year / 4) + 1;
	int a[total];
	int i;
	cout <<  endl;
	for( i=x ; i<=y ; i++)
	{
		if(i%4==0)
		{
			cout << i << "  ";
			a[total] = total;
		}
	}
	cout << endl << endl <<"Total leap year is : "<< a[total]  ;
	
	
}
