//	Q Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//	- car_id
//	- car_company_name
//	- car_color
//	- car_model
//	- car_release_year


#include<iostream>
#include<string.h>
using namespace std;

class Car
{
	public:	
	   int car_id,car_release_year;
	   string car_company_name,car_color,car_model;
	
	void input()
	{
		cin.ignore();
		cout << "Enter Company name of car : ";
		getline(cin,car_company_name);
		
		cout << "Enter car color : ";
		getline(cin,car_color);
		
		cout << "Enter car model : ";
		getline(cin,car_model);
		
		cout << "Enter car id : ";
		cin >> car_id;
		
		cout << "Enter Releasing year : ";
		cin >> car_release_year;
	}
	
	void output()
	{
		cout << "Name of Car company : " << car_company_name << endl;
		cout << "Color of car        : " << car_color << endl;
		cout << "Model of car        : " << car_model << endl;
		cout << "Id of car           : " << car_id << endl;
		cout << "Car Releasing year  : " << car_release_year << endl;
	}
};

main()
{
	int i,n;

	cout << "Enter no. of car for details :";
	cin >> n;
	Car c[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Enter detail of car " <<i+1;
		cout << endl;
		c[i].input();
	}
	cout << endl;
	for(i=0;i<n;i++)
	{
		cout << endl <<"       Detail of car " <<i+1;
		cout<<endl;
		c[i].output();
	}
	
	return 0;
}
