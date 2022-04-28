//18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma
1.#include<stdio.h>
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
2.#define a 20
void main(){
printf("%d",a);
}
3.#undef
#define a 30
void main(){
#undef a
printf("%d",a);
}
4.#pragma pack(2)
void main(){
struct x{
int a;
char b;
float c;
};
printf("%d",sizeof(struct x));
}
