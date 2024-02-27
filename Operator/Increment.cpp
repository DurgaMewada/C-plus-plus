// ++ operator

#include<iostream>
using namespace std;

class Increment
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
		cout << "     Increment :"<< a;
	}
	
	Increment operator++(int)
   {

   	 
   	    Increment temp;
   	    temp.a = ++a;
   	
   	    return temp;
   }
};

int main()
{
	Increment i1,i2;
	i1.set();
    i2 = i1++ ;
	i2.get();

	return 0;
}