#include<stdio.h>
#define X 1
#define UNIX 1
#define LINUX 2
#define WINDOWS 3
void main(){
#if(X==UNIX)
int a=10;
int b=60;
#elif(X==LINUX)
int a=40;
int b=80;
#else
int a=30;
int b=60;
#endif
int c=a+b;
printf("%d",c);
}