1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;
Ans:Integer Pointer

2)  In the following code what is 'P'?
typedef char *charp;
Ans:const charp P;

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
Ans:x is an array of three function pointers

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 
Ans:type of array of a function pointer and we can create a variable using this created type.

5) What is pf in the below statement?
typedef int (*pf)(int);
Ans:pf is a function pointer that store the address of address of a function which takes two ints as its agrs and returns an int.

6) What do the following declarations mean?
typedef char *pc; //pc is pointer to char                     
typedef pc fpc(); //fpc is function returning pointer to char
typedef fpc *pfpc; //pfpc is pointer to fpc
typedef pfpc fpfpc(); //fpfpc is function accepting unspecified arguments and returning pfpc
typedef fpfpc *pfpfpc; //pfpfpc is a pointer to fpfpc
pfpfpc a[N];          //a is an array of N pfpfpc
                    
7) Write few programs using typedef on structures and enums.
1. 
#include<stdio.h>
typedef enum
{
Mon, Tue, Wed, Thur, Fri, Sat, Sun
}days;

int main()
{
	days day;
	day = Wed;
	printf("%d",day);
	return 0;
}
Ans:2

2.
#include<stdio.h>
typedef struct{
  int x;
  int y;
}num;
int main() {
    num p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}
Ans: 1 3