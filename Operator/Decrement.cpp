// -- operator

#include<iostream>
using namespace std;

class Decrement
{
	int a;
	
	public :
	void set()
	{
		cout << "Enter value : ";
		cin >>  a;	
	}
	void get()
	{
		cout << "     Decrement :"<< a;
	}
	
	Decrement operator--(int)
   {

   	 
   	    Decrement temp;
   	    temp.a = --a;
   	
   	    return temp;
   }
};

int main()
{
	Decrement d1,d2;
	d1.set();
    d2 = d1-- ;
	d2.get();

	return 0;
}