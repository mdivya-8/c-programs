#include<stdio.h>
int palendrome(char a[10]){
  int i=0,j=0;
  while(a[j]!='\0')
  j++;
  j=j-1;
  while(i<j){
      if(a[i]!=a[j])
      break;
      i++;
      j--;
  }
  if(i>=j)
  printf("the string is palendrome");
}

int main()
{
    char a[10];
    printf("enter a string");
    scanf("%s",a);
    palendrome(a);
    
    
}