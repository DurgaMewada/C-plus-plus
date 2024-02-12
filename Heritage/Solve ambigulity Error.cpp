//Q.4 WAP to solve ambiguity error.
#include<iostream>
using namespace std;

class A
{
	protected :
		int a ;
	
	public:
		void input()
		{
		    cout << "Enter number for sum :";
			cin >> a;	
		}
		
};
class B : public A
{
	protected :
		int a;
		
	public:
		void input()
		{
		    cout << "Enter number for sum :";
			cin >> a;	
		}
};
class Sum : public B
{
	public :
		void sum()
		{
			A::input();
			B::input();
			cout << "    Sum of no is : " << A::a + B::a ;
		}
};

int main()
{
	Sum s;
	s.sum();
	
	return 0;
}