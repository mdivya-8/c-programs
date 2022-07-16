#include <stdio.h>
int add(int c,int d);
int main()
{
   int a=10,b=20;
   int res=add(a,b);
   printf("%d",res);
}
int add(int c,int d)
{
    int sum=c+d;
    return sum;
}