#include<stdio.h>
int main()
{
int n=5,i,j,k=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
k++;
printf("%d",k%2);
}
printf("\n");
}
}
