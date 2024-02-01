//	Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//	- cust_id
//	- cust_name
//	- cust_age
//	- cust_city
//	- cust_mobile_number
//	- cust_simcard_validity (in years)
//	- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)

#include<iostream>
using namespace std;

class Customer
{
	int cust_id,cust_age,cust_simcard_validity;
	long long cust_mobile_number;
	string cust_name,cust_city,cust_telecom_brand_name;
	
	public:
		void input()
		{
			cin.ignore();
		   cout << "Enter Name of customer : ";
		   getline(cin,cust_name);
		
		   cout << "Enter City  : ";
		   getline(cin,cust_city);
		
		   cout << "Enter Telecom brand name (like Jio, Airtel, Vi, etc.): ";
		   getline(cin,cust_telecom_brand_name);
		   
		   cout << "Enter Id  :";
		   cin >> cust_id;
		   
		   cout << "Enter Age :";
		   cin >> cust_age;
		   
		   cout << "Enter validity of simcard (in year) :";
		   cin >> cust_simcard_validity;
		   
		   cout << "Enter mobile number : ";
		   cin >> cust_mobile_number;
		}
		
		void output()
		{
			cout << "Name                  :" << cust_name <<endl;
			cout << "Id                    :" << cust_id <<endl;
			cout << "Age                   :" << cust_age <<endl;
			cout << "Mobile number         :" << cust_mobile_number <<endl;
			cout << "City                  :" << cust_city <<endl;
			cout << "Validity of simcard   :" << cust_simcard_validity <<endl;
			cout << "Telecom brand name    :" << cust_telecom_brand_name <<endl;
		}
	
};
int main()
{
	
	int i,n;
	cout << "Enter no. of Customer : ";
	cin >> n;
    Customer c[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Customer " <<i+1;
		cout << endl;
		c[i].input();
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl <<"      Customer " <<i+1;
		cout<<endl;
		c[i].output();
	}
	
	return 0;
}