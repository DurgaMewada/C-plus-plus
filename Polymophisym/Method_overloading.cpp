//	Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//	- use only one method named calculate() in the child class
//	- if you pass 2 arguments, perform division
//	- if you pass 3 arguments, perform subtraction
//	- if you pass 4 arguments, perform multiplication
//	- if you pass 5 arguments, perform addition

#include<iostream>
using namespace std;
class Program
{
	protected:
		int a,b,c,d,e;
};
class Operations : public Program 
{
	public:
		void calculate(int a,int b)
		{
			this->a = a;
			this->b = b;
			cout << "Division of number = "<< a/b <<endl;
	
		}
		void calculate(int a,int b,int c)
		{
			this->a =a;
			this->b =b;
			this->c =c;
			cout << "Subtraction of number = "<< a-b-c <<endl;		
		}
		void calculate(int a,int b,int c,int d)
		{
			this->a =a;
			this->b =b;
			this->c =c;
			this->d =d;
			cout << "Multiplication of number = "<< a*b*c*d <<endl;		
		}
		void calculate(int a,int b,int c,int d,int e)
		{
			this->a =a;
			this->b =b;
			this->c =c;
			this->d =d;
			this->e =e;
			cout << "Addition of number = "<< a+b+c+d+e <<endl;		
		}
};
int main()
{
	Operations o;
	o.calculate(20,10);
	o.calculate(30,20,50);
	o.calculate(10,20,30,40);
	o.calculate(10,20,30,40,50);
	
	
	return 0;
}