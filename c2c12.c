#include "loi.h"


int loi(int a, int b)
{
	int a1, b1, a0, b0;
	a0= a%2;
    a1= a/2;
   
    b0= b%2;
	b1= b/2;

	a0 = (a0 + b0)%2;
    a1 = (a1 + b1)%12;
	
    return a0+2*a1;
}

int group_sub(int a,int b)
{
    int a1,a0;
    int b1,b0;
    a0= a%2;
    a1= a/2;
   
    b0= b%2;
    b1= b/2;
   
    a0 =(a0 + b0)%2;
    a1=(a1+12-b1)%12;
    
    return a0+2*a1;

}

int ordre = 24;

int exposant = 12;
