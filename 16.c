#include<stdio.h>
int main()
{
int n=5,i,j;
for(i=5;i>0;i--)
{
for(j=n;j>=i;j--)
{
printf("%c",96+j);
}
printf("\n");
}
}
