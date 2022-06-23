#include<stdio.h>
void main()
{
char temp;
int i,j=0;
char str[10];
printf("enter the string:");
scanf("%s",str);
while(str[j]!='\0')
j++;
j=j-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("the reversed string is %s",str);
}

