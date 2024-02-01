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
	int feet,inch;
	cout << "Enter feet : " ;
	cin >> feet;
	cout << "Enter inch : " ;
	cin >> inch;
	
	int check;
	
	feet=feet+(inch/12);
	inch=inch%12;
	
	cout << "\nAfter converting \n" ;
	cout << feet << ":" << inch;

}
