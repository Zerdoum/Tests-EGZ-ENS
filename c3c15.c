#include "loi.h"


int loi(int a, int b)
{
	int a1, b1, a0, b0;
	a0= a%3;
    a1= a/3;
   
    b0= b%3;
	b1= b/3;

	a0 = (a0 + b0)%3;
    a1 = (a1 + b1)%15;
	
    return a0+3*a1;
}

int group_sub(int a,int b)
{
    int a1,a0;
    int b1,b0;
    a0= a%3;
    a1= a/3;
   
    b0= b%3;
    b1= b/3;
   
    a0 =(a0+3-b0)%3;
    a1=(a1+15-b1)%15;
    
    return a0+3*a1;

}

int ordre = 45;

int exposant =15;
