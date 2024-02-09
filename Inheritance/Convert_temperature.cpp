//	Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//	- Class P has the following members: temperature attribute in float
//	- Class Q has the following members: toFehrenheit() method
//	- Class R has the following members: toKelvin() method.

#include<iostream>
using namespace std;

class Temperature 
{
	protected:
			float celsius,fahrenheit,kelvin;

};
class Convert_F : public Temperature
{
	public:
		void toFehrenheit()
		{
			// °F = (9/5 × °C) + 32.
			
			cout << "Enter Celsius to convert temperature : ";
			cin >> celsius;
			fahrenheit = (celsius * 9/5) + 32;
			cout << endl << "Temperature convert Celsius into Fahrenheit : "<< endl;
			cout << "            Fahrenheit = "<<fahrenheit <<endl;
		}
		
};
class Convert_K : public Convert_F
{
	public:
		void toKelvin()
		{
			//K = (F − 32) × 5 ⁄ 9 + 273.15
			kelvin = (fahrenheit-32) * 5/9 + 273.15;
			cout << endl<< "Temperature convert Fahrenheit into Kelvin : "<< endl;
			cout << "            Kelvin = "<<kelvin;
			
		}
};

int main()
{
	Convert_K k;
	k.toFehrenheit();
	k.toKelvin();
}
