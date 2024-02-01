//	Q. Write a program to convert second into hh: mm: ss.
#include<iostream>
using namespace std;

class Time
{
		int sec,min,hour;
	public:
	void convert()
	{
		
	  cout << "Enter second for coverting them in hh/mm/ss format : ";
	  cin >> sec;
	  
	   hour = sec/3600;
	   sec=sec-(hour*3600);
	   min=sec/60;
	   sec=sec-(min*60);
	   
	   cout << endl << " Convert " <<  endl;
	 cout <<"hh : mm : ss " << endl << hour << ':' << min << ':' << sec ; 
	}
   
	
	
};
main()
{
	Time t1;
	t1.convert();
}
