#include<stdio.h>
int main()
{
int n=5,i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
(i%2==0)?printf("%d",1):printf("%d",0);
}
printf("\n");
}
}
