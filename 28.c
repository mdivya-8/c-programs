#include<stdio.h>
int main()
{
int n=5,i,j,k=-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
k=k+1;
(k%2==0)?printf("%d",k):printf("-%d",k);
}
printf("\n");
}
}
