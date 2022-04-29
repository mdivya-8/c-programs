#include"header.h"
void check_swap(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swap elements:");
	printf("a=%d\tb=%d\n",a,b);
}