//	Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//	- the area of a circle
//	- the area of a triangle
//	- the area of a rectangle
//	- use one single pure virtual function named calculate() to perform all the above operations


//   Rectangle	Area = l × w
//   Triangle	Area = 1/2 * base *height
//   Circle	Area = π r 2


#include<iostream>
using namespace std;

class Shape
{
	protected:
		int length,width,base,height,radius;
		const float pi = 3.14;
		
		public:
			virtual void calculate()=0;
};

class Circle : public Shape
{
	public:
		void setter()
		{
			cout << "Enter Radius for finding area : ";
			cin >> radius;

		}
		void calculate()
		{
			cout << "     Area of Triangle is  "<< pi*radius*radius << endl;
		}
};

class Triangle : public Shape
{
	public:
		void setter1()
		{
			cout << endl;
			cout << "Enter Base for finding area : ";
			cin >> base;
			
			cout << "Enter Height for finding area : ";
			cin >> height;
		}
		void calculate()
		{
			cout << "     Area of Triangle is  "<< (0.5)*(base*height) << endl;
		}
};

class Rectangle : public Shape
{
	public:
		void setter2()
		{
			cout << endl;
			
			cout << "Enter length for finding area : ";
			cin >> length;
			
			cout << "Enter Width for finding area : ";
			cin >> width;
		}
		void calculate()
		{
			cout << "     Area of Rectangle is  "<< length*width << endl;
		}
};

int main()
{
	Circle c;
	c.setter();
	c.calculate();
	
	Triangle t;
	t.setter1();
	t.calculate();

	Rectangle r;
	r.setter2();
	r.calculate();
	
	return 0;
}