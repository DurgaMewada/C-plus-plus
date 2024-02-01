//	Q. Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//	For example,
//	Input:
//	Enter the first number: 2020
//	
//	Enter the second number: 2040
//	
//	Output:
//	The array is: 2020, 2024, 2028, 2032, 2036, 2040

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
