//	Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
//	Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//	In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.

#include<iostream>
using namespace std;

class Shape 
{
	protected:
		int length,width,base,height,area_t,area_r;
		
	public:	
		Shape()
		{			
			cout << "Enter value of Width : ";
			cin >> width;
		
			cout << "Enter value of Height : ";
			cin >> height;
		}
};
class Triangle : public Shape
{
	public:
		void triangle()
		{
			area_t = (width * height)*1/2;
			cout << endl <<  "    Area of Triangle is " << area_t << endl<<endl;
		}	
};
class Rectangle : public Shape
{
	public:
		void rectangle()
		{
			area_r = (width * height);
			cout << endl <<  "    Area of Rectangle is " << area_r;
		}
};
int main()
{
	Triangle t1;
	t1.triangle();
		
	Rectangle r1;
	r1.rectangle();
	
	return 0;
}
