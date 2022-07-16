//#SUM OF ALL ARRAY ELEMENTS#
#include<stdio.h>
int main(){
    int sum=0,i;
    int a[]={1,2,3,4,5};
   // int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
}