#include "loi.h"


int loi(int a, int b)
{
	return ((a^b)&3) + (((a&0xfc)+(b&0xfc))%24);
}

int group_sub(int a, int b)
{
	return ((a^b)&3) + (((a&0xfc)+24-(b&0xfc))%24);

}

int ordre = 24;

int exposant = 6; 


