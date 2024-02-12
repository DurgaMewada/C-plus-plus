//	Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//	- Class RBI -> Class SBI
//	- Class RBI -> Class BOB
//	- Class RBI -> Class ICICI
//	- inherit rate attribute and getROI() method in all child classes
#include<iostream>
using namespace std;
class RBI
{
	protected :
		int interest;

		
};
class SBI : public RBI
{
	public:
		void getROI()
		{
			cout <<"       SBI Bank ";
			cout <<endl<< "Enter Rate of interest : ";
			cin >> interest;
		    cout<< "Interest of SBI bank is " << interest<<endl;
		}
		
};
class BOB : public RBI
{
	public:
		
		void getROI()
		{
			cout <<endl<< "       BOB Bank ";
			cout <<  endl <<"Enter Rate of interest : ";
			cin >> interest;
		    cout<< "Interest of BOB bank is " << interest<<endl;
		}
		
};
class ICICI : public RBI
{
	public:
		
		void getROI()
		{
			cout <<endl<< "       ICICI Bank ";
			cout <<endl <<  "Enter Rate of interest : ";
			cin >> interest;
		    cout<< "Interest of ICICI bank is " << interest<<endl;
		}
	
};
int main()
{
	SBI s;
	s.getROI();
	BOB b;
	b.getROI();
	ICICI i;
	i.getROI();
	
	return 0;
}