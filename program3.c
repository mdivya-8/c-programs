#include <stdio.h>
void add (int,int);//with argument& has no return value//function declaration
void main() {
   int a=2,b=3;
add(a,b);
}
void add (int x,int y){
                          //function definition or body
    int z=x+y;
    printf("%d",z);
}