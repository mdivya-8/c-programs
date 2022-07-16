#include <stdio.h>
void add (void);//no argument& no return value//function declaration
int main() {
    add();//function call
}
void add (void){
    int a=2,b=3;       //function definition or body
    int c=a+b;
    printf("the sum is %d",c);
}