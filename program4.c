#include <stdio.h>
int add (int,int);//with argument& has return value//function declaration
void main() {
   int a=2,b=3;
int c=add(a,b);
printf("the sum is %d",c);
}
int add (int x,int y){
                          //function definition or body
    int z=x+y;
    return z;
}