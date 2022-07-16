#include <stdio.h>
struct ref{
    int i;
    char c;
    struct ref* ptr;
};
int main()
{
    struct ref var1;
    struct ref var2;
    var1.i=100;
    var1.c='B';
    var1.ptr=NULL;
    var2.i=200;
    var2.c='C';
    var2.ptr=NULL;
    var1.ptr=&var2;
    printf("%d %c\n",var1.ptr->i,var1.ptr->c);
    printf("%u %u",var1.ptr,var2.ptr);
}