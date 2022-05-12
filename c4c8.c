#include "loi.h"


int loi(int a, int b)
{
	int a1, b1, a0, b0;
	a0= a%4;
    a1= a/4;
   
    b0= b%4;
	b1= b/4;

	a0 = (a0 + b0)%4;
    a1 = (a1 + b1)%8;
	
    return a0+4*a1;
}

int group_sub(int a,int b)
{
    int a1,a0;
    int b1,b0;
    a0= a%4;
    a1= a/4;
   
    b0= b%4;
    b1= b/4;
   
    a0 =(a0+4-b0)%4;
    a1=(a1+8-b1)%8;
    
    return a0+4*a1;

}

int ordre = 32;

int exposant =8;
