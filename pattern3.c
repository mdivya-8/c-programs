#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number or rows");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
       printf("*");     
        }
        printf("\n");
    }
    }