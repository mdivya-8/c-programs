#include<stdio.h>
void swap(int *,int *);
void swap(int *x,int *y)
{
	int t;
	t  = *x;
	*x  = *y;
	*y  =  t;
}