#include<stdio.h>
int main()
{
int i=0;
char source[10],destination[20];
printf("enter string  :");
scanf("%s %s",source,destination);

while(source[i]!='\0')
{
destination[i]=source[i];
i++;
}
//b[i]!='\0';
printf("%s",destination);
}

