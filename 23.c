#include<stdio.h>
int main()
{
int n=5,i,j,k=-2;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
k=k+2;
printf("%d",k);
}
printf("\n");
}
}
