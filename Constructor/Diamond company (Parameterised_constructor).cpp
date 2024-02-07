//	Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//	mentioned attributes:
//	- comp_id
//	- comp_name
//	- comp_staff_quantity
//	- comp_revenue (per year)
//	- comp_import_raw_diamonds (no. of raw diamonds
//	imported per year)
//	- comp_export_diamonds (no. of diamonds per year)
//	- comp_ceo (name of CEO of the company)


#include<iostream>
#include<string.h>
using namespace std;

class Company
{
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo;
	
	public:
		Company(int comp_id,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_name,string comp_ceo)
		{
	
			this->comp_id = comp_id;
			this->comp_staff_quantity = comp_staff_quantity;
			this->comp_revenue = comp_revenue;
			this->comp_import_raw_diamonds = comp_import_raw_diamonds;
			this->comp_export_diamonds = comp_export_diamonds;
			this->comp_name = comp_name;
			this->comp_ceo = comp_ceo;
		
		}
		void detail_input()
		{
			cout << endl << "   ---------  Detils of cafe !!  ----------" << endl;
			
			cout << "      Company Name                          :" << this->comp_name <<endl;
			cout << "      Company Id                            :" << this->comp_id <<endl;
			cout << "      Company Ceo                           :" << this->comp_ceo <<endl;
			cout << "      Company Revenue (per year)            :" << this->comp_revenue <<endl;
			cout << "      Company Diamond import (per year)     :" << this->comp_import_raw_diamonds <<endl;
			cout << "      Company Diamond export (per year)     :" << this->comp_export_diamonds <<endl;
			cout << "      Staff quantity of company             :" << this->comp_staff_quantity <<endl;
		}
};
int main()
{
	int n;
	cout << "Enter no. of company for output :";
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	    string comp_name,comp_ceo;
	    
	       cout << endl;
	        cin.ignore();
			cout << "Enter Name of company :";
			getline(cin,comp_name);
			
			cout << "Enter CEO of company :";
			getline(cin,comp_ceo);
			
			cout << "Enter ID of company :";
			cin >> comp_id;
			
			cout <<"Enter staff quantity :";
			cin >> comp_staff_quantity;
			
			cout << "Cafe Revenue (per year) :";
			cin >> comp_revenue;
			
			cout << "Enter No. of raw diamond import in year :";
			cin >> comp_import_raw_diamonds ;
			
			cout << "Enter No. of raw diamond Export in year :";
			cin >> comp_export_diamonds;	
			
			Company c(comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_name,comp_ceo);
			c.detail_input();
	}
	
}
