#include "loi.h"

int loi(int a, int b)
{
	return ((a^b)&3) + (((a&0xfc)+(b&0xfc))%40);
}

int group_sub(int a, int b)
{
	return ((a^b)&3) + (((a&0xfc)+40-(b&0xfc))%40);

}


int ordre = 40;

int exposant = 10; 


