// Q.2 Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B
{
	protected:
		int a;
};
class C : public A , public B
{
	public:
		void set()
		{
			cout << "Enter value : ";
			cin >> A::a;
			cout << "Enter value : ";
			cin >> B::a;
		}
		void get()
		{
			cout << "A = " << A::a << endl;
			cout << "B = " << B::a;
		}
		
};
int main()
{
    C c;
	c.set();
	c.get();	
	return 0;
}