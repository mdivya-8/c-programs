1.#include <stdio.h>

int main()
{
    printf("%d\n",1==5==5);
}
output---->0

2.#include <stdio.h>

int main()
{
    int i=0;
    printf("%d %d",i,i++);
}
output----> 1 0 (operation goes from right to left and executes the output from left to right)
3.#include <stdio.h>

int main()
{
    int x=5;
    printf("%d %d %d\n",x++,x++,x++);
}
output----> 7 6 5 (operation goes from right to left and executes the output from left to right)
4.#include <stdio.h>

int main()
{
    int x=2;
    printf("%d ",++x,x++);
    printf("%d\n",x++);
}
output----> 4 4 (operation goes from right to left and executes the output from left to right)
5.#include <stdio.h>

int main()
{
    int k=1;
    printf("%d==1 is""%s\n",k,k==1?"TRUE":"FALSE");
    
}
outpu----> 1==1 istrue
6.#include <stdio.h>

int main()
{
    int i=5;
   i=i++ - --i + ++i;
   printf("%d",i);
    
}
output----> 6
7.#include<stdio.h>
int main()
{
int x=10,y=5,p,q;
p=x>9;
q=p||(x=5,y=10);
printf("%d %d %d \n",q,x,y);
}
output----> 1 10 5 (in or || operation true with anything is true so q is 1 )

