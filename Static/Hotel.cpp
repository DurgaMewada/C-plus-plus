//	Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//	- hotel_id
//	- hotel_name -static
//	- hotel_type (like hotel or motel)
//	- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//	- hotel_location (city name)
//	- hotel_establish_year - static
//	- hotel_staff_quantity
//	- hotel_room_quantity
#include<iostream>
#include<string.h>
using namespace std;

class  Hotel
{
	int hotel_id,hotel_staff_quantity,hotel_room_quantity,hotel_rating;
	string hotel_type,hotel_location;
	static string hotel_name;
	static string hotel_establish_year;
	  public:
	  	   void input()
	  	   {
	  	       	cin.ignore();
			   cout << "Enter hotel type (like hotel or motel) : ";
			   getline(cin,hotel_type);
			
			   cout << "Enter hotel location : ";
			   getline(cin,hotel_location);
			   
			   cout << "Enter hotel id :";
			   cin >> hotel_id;
			   
			   cout << "Enter Staff quantity of hotel :";
			   cin >> hotel_staff_quantity;
			   
			   cout << "Enter Room quantity of hotel :";
			   cin >> hotel_room_quantity;
			   
			   cout << "Enter rating of hotel (like 1 Star, 2 Start, ..., 7 Star) : ";
			   cin >> hotel_rating;
		   }
		   	void output()
	    	{
				cout << "Hotel Name             :" << hotel_name <<endl;
				cout << "Hotel Id               :" << hotel_id  <<endl;
				cout << "Hotel Rating           :" << hotel_rating <<endl;
				cout << "Hotel Location         :" << hotel_location <<endl;
				cout << "Hotel Establish year   :" << hotel_establish_year <<endl;
				cout << "Hotel Staff quantity   :" << hotel_staff_quantity <<endl;
				cout << "Hotel Room quantity    :" << hotel_room_quantity <<endl;
	    	}
	
	  	 
};
string Hotel::hotel_name="Royal member ";
string Hotel::hotel_establish_year="Since 1990";
int main()
{
	
	int i,n;
	cout << "Enter no. of : ";
	cin >> n;
    Hotel h[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"       Hotel " <<i+1;
		cout << endl;
		h[i].input();
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"       Hotel " <<i+1;
		cout<<endl;
		h[i].output();
	}
	
	return 0;
}