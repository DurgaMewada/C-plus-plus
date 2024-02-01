//	Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//	For example,
//	Input:
//	Enter seconds: 4520
//	
//	Output:
//	1:15:20

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