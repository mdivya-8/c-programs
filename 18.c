#include<stdio.h>
int main()
{
int i,j,k=96;
for(i=1;i<6;i++)
{
for(j=0;j<i;j++)
{
k=k+1;
printf("%c",k);
}
printf("\n");
}
}
