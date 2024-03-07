#include<iostream>
using namespace std;

class Age
{
	int age;
	
	public :
		void vote()
		{
			cout << "Enter age : ";
			cin >> age;
			
			try
	        {
		      if(age < 18)
			  {
				throw age;	
		      }
			  else
			  {
				cout << "You Are Eligible to Vote..." << endl;	
			  }   	
	        }
	        catch(...)
	        {
		      cout << "You Are Not Eligible to Vote...!" << endl;	
	        }		
		}	
};

int main()
{
	Age a;
	a.vote();
	

	return 0;
}