#include<stdio.h>
void main()
{
int i;
char str1[10],str2[10];
printf("enter the strings:");
scanf("%s %s",str1,str2);
while(str1[i]!='\0'&&str2[i]!='\0')
{
if(str1[i]!=str2[i])
break;
i++;
}
if(str1[i]=='\0'&&str2[i]=='\0')
printf("the string is equal");
else
printf("the string is not equal");
}
