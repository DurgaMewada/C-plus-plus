//     Pattern
//	1
//	2 9
//	3 8 10
//	4 7 11 14
//	5 6 12 13 15


#include<iostream>
using namespace std;

main() 
{
	int i,j,k;
	
    for(i=0; i<5; i++) 
    {
        for(j=0; j<=i; j++) 
		{
            int l = 0;
            for(k=0; k<j; k++) 
	    	{
                l = l + 5;
				l = l - k;
            }
            if(j%2==0) 
	    	{
	    		l=l+i;
	    		l=l-j+1;
                cout << " " << l ;
            } 
		    else
		    {
		    	l=l+5;
		    	l=l-i;
	            cout << " " << l ;
	        }
        
        }
        cout << endl;
    }
}