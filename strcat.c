#include<stdio.h>
void main()
{
int i,j=0;
char s1[10],s2[10],s[20];
printf("enter the strings:");
scanf("%s %s",s1,s2);
while(s1[i]!='\0')
{
s[i]=s1[i];
i++;
}
while(s2[j]!='\0')
{
s[i]=s2[j];
i++;
j++;
}
printf("the concatinated string is %s",s);
}
