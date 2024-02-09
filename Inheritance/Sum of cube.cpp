//	Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//	- Class X has the following members: a,b & c attributes in integer data type
//	- Class Y has the following members: setData() and getData() methods

#include<iostream>
#include<string.h>
using namespace std;

class X
{
	protected:
		int a,b,c;
};
class Y : public X
{
	public:
      	void setData()
      	{
      		cout << "Enter value of a :";
      		cin >> a;
      		cout << "Enter value of b :";
      		cin >> b;
      		cout << "Enter value of c :";
      		cin >> c;
		}
		
		void getData()
		{
			a=a*a;
			b=b*b;
			c=c*c;
			
			cout << endl << "   Cubes of all numbers are : "<< a << " " << b << " " << c;
			cout << endl << endl;
			cout << "   Sum of all cubes is : "<<a+b+c << endl;
		}
};
int main()
{
	Y y;
	y.setData();
	y.getData();
}