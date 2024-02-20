//	Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
//	
//	For example,
//	Input:
//	input1 => Km: 3, Meter: 1020
//	input2 => Km: 2, Meter: 2050
//	
//	Output:
//	Km: 8, Meter: 70

#include<iostream>
using namespace std;

class Convert
{
	int meter,km;
	
	public :
		void set()
		{
			cout << "Kilometer : ";
			cin >> km;
			
			cout << "Meter : ";
			cin >> meter;	
		}
		
		void get()
		{
			cout <<	endl << "Kilometer : " << km << " Meter : " << meter;
			cout << endl;
		} 
		Convert operator+(Convert c1)
		{
			Convert temp;
			
			temp.km = this->km + c1.km;
			temp.meter = this->meter + c1.meter;
			
			temp.km = temp.km + (temp.meter/1000);
			temp.meter = (temp.meter%1000);
			
			return temp;
		}
		
};

int main()
{
	Convert c,c1,c2;
	
	c.set();
	c1.set();
	c2 = c + c1;
	
	c2.get();
	
	return 0;
}
