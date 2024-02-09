//	Q.2 Write a Program to make a Supermarket Billing System.
//	Requirements:
//	(A) User Input:
//	- Item Number
//	- Item Name
//	- Quantity
//	- Price
//	- Discount
//	(B) Verify User Id And Password
//	(C) Display Records:
//	- All Records
//	- By Searching Item Number

#include<iostream>
#include<string.h>
using namespace std;

class Super_market
{
	string item_name,id;
	int item_quantity,item_price,item_discount,password,check;
	static string user_id;
    static int user_password;
	public:
		int item_number;
		void verify_user_input()
		{
			cout <<endl<< "              SD Sons       "<<endl;
			cout <<endl<<"     User verification     :"<< endl;
		
		start:
			cin.ignore();
			cout << "Enter Id to check details (Hint : Suparmarket name) :"<<endl;
			getline(cin,id);
			
			cout << "Enter password (Hint : 123***78) :"<<endl;
			cin >> password;
	
	        if(user_id==id && user_password==password)
		    {
		    	check=1;
			}
			else
			{
				cout << endl<<"Enter valid user id and password : ";
				goto start;
			}
		
		}
		
		void input()
		{ 
		
				cout << "Enter Name of product :";
				getline(cin,item_name);
				cin.ignore();
				
				cout << "Enter Number of product :";
				cin >> item_number;
				
				cout << "Enter Quantity of product :";
				cin >> item_quantity;
				
				cout <<"Enter Price of product :";
				cin >> item_price;
				
				cout <<"Enter Discount of product :";
				cin >> item_discount;
					
		  }
		  
		void output()
		{
			cout << endl << "   ---------  Detils of product !!  ----------" << endl;
			
			cout << "      Product number           :" << item_number <<endl;
			cout << "      Product name             :" << item_name <<endl;
			cout << "      Product price            :" << item_price <<endl;
			cout << "      Product Quantity         :" << item_quantity <<endl;
			cout << "      Discount on product      :" << item_discount <<endl;
	
		}
};
string Super_market :: user_id="SD Sons";
int Super_market :: user_password=12345678;

int main()
{
	int n;
	cout << "Enter number of Product for there detail :";
	cin >> n;

	Super_market s[n];
	
	for(int i=1;i<=1;i++)
	{
		s[i].verify_user_input();
	}
	
	for(int i=0;i<n;i++)
	{
		cout << endl;
		s[i].input();
	}  
	
	int no;
	cout << endl << "------Enter product number to search for detail :";
	cin >> no;
	for (int i=0;i<n;i++)
	{
		if(no==s[i].item_number)
		{
			s[i].output();
		}
	}
	return 0;
}