#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<5;i++)
{

for(j=0;j<=i;j++)
{
if(j%2!=0)
{
printf("-%d",i);
}
else
printf(" %d",i);
}
printf("\n");
}
}


