// Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number
#include<iostream>
using namespace std;
class Input
{
	protected:
		int no;
		
	public:
		void input()
		{
		    cout << "Enter number for process (Square and cube) :";
			cin >> no;	
		}
		
};
class Square : public Input
{
	public:
		void square_process()
		{
			cout << endl;
			input();
			cout << "     Square of number is "<< no*no <<endl;
		}
		
		
};
class Cube : public Input
{
		public:
		void cube_process()
		{
			cout << endl;
			input();
			cout << "     Cube of number is "<< no*no*no <<endl;
		}
		
};
int main()
{
	Square s;
	s.square_process();
	Cube c;
	c.cube_process();
	return 0;
}
