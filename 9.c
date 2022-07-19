#include<stdio.h>
int main()
{
int n=5,i,j,num=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			num++;
			printf("%d ",num*num);
			}
		printf("\n");
		}
		}
