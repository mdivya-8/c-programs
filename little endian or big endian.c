////endian.c///
#include<stdio.h>
#include"Endians.h"
int main()
{
  unsigned int x = 0x76543210;
  char *c =(char*)&x;
  printf("*c is: 0x%x\n", *c);
  endians(c);
}


///endian.h////
void endians(char *c)
{
  if(*c == 0x10)
  {
    printf(" our system is little endian.\n");
  }
  else
  {
     printf("our system is big endian.\n");
  }
}