#include<stdio.h>
void reverse(char a[10]){
    char temp;
  int i=0,j=0;
  while(a[j]!='\0')
  j++;
  j=j-1;
  while(i<j){
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
  }
}
int main()
{
    char a[10];
    printf("enter a string");
    scanf("%s",a);
  reverse(a);
  printf("%s",a);
}