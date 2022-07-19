#include<stdio.h>
int main()
{
int n=5,i,j,k=1;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i%2!=0)
printf("%d",k);
else
{
printf("*");
}
}
if(i%2!=0)
k++;
printf("\n");
}
}
