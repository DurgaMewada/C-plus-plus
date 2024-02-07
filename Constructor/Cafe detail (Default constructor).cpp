//	Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//	- cafe_id
//	- cafe_name
//	- cafe_type (like a rooftop or normal)
//	- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//	- cafe_location (city name)
//	- cafe_establish_year
//	- cafe_staff_quantity
#include<iostream>
#include<string.h>
using namespace std;

class Cafe
{
	int cafe_id,cafe_rating,cafe_establish_year,cafe_staff_quantity;
	string cafe_name,cafe_type,cafe_location;
	
	public:
		Cafe()
		{
			cout <<endl<<endl<<"       Enter Details of cafes " << endl;
		
		}
		void input()
		{
			cin.ignore();
			cout << "Enter Name of cafe :";
			getline(cin,cafe_name);
			
			cout << "Enter Type of Cafe (like a rooftop or normal) :";
			getline(cin,cafe_type);
			
			cout << "Enter location of cafe :";
			getline(cin,cafe_location);
			
			cout <<"Enter id :";
			cin >> cafe_id;
			
			cout << "Rating of cafe :";
			cin >> cafe_rating;
			
			cout << "In which year cafe establish :";
			cin >> cafe_establish_year;
			
			cout << "Enter Staff quantity of cafe :";
			cin >> cafe_staff_quantity;	
		}
		void output()
		{
			cout << endl << "   ---------  Detils of cafe !!  ----------" << endl;
			
			cout << "      Cafe Name                   :" << cafe_name <<endl;
			cout << "      Cafe Id                     :" << cafe_id <<endl;
			cout << "      Location of cafe            :" << cafe_location <<endl;
			cout << "      Type of cafe                :" << cafe_type <<endl;
			cout << "      Cafe establish year         :" << cafe_establish_year <<endl;
			cout << "      Rating of cafe              :" << cafe_rating <<endl;
			cout << "      Staff quantity of cafe     :" << cafe_staff_quantity <<endl;
		}
	    ~Cafe()
	    {
	    	cout << endl<< "             THANK YOU :)   ";
		}
};
	        
int main()
{
	int n;
	cout << "Enter no. of cafes for there details : ";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		Cafe c;
        c.input();
        c.output();
	}
	
	return 0;
}