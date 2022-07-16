#include <stdio.h>
int add (void);//no argument& has return value//function declaration
int main() {
   int x= add();//function call
printf("%d",x);
}
int add (void){
    int a=2,b=3;       //function definition or body
    int c=a+b;
    return c;
}