#include<stdio.h>
int main()
{
int n=5,i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i%2!=0)
(j%2!=0)?printf("1"):printf("0");
else
(j%2!=0)?printf("0"):printf("1");
}
printf("\n");
}
}
