#include <stdio.h>
struct emp{
    int empno;
    char empname;
    float empsal;
};
void main(){
    struct emp x={100,'s',2.5};
    printf("%d %c %f\n",x.empno,x.empname,x.empsal);
    printf("%d\n",sizeof(x));// sizeof variable of strcture
    printf("%d",sizeof(struct emp));//sizeof data type of the structure
}