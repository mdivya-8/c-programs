#include<stdio.h>
int decimal_binary(int n);
int main()
{
    int n;
    printf("enter a decimal number");
    scanf("%d",&n);
    printf("decimal (%d)= binary(%d)",n,decimal_binary(n));
}
int decimal_binary(int n)
{
    if(n==0)
    return 0;
    else
    return((n%2)+10*decimal_binary(n/2));
}