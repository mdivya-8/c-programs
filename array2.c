# COUNT OF ZEROS AND ONES#
#include<stdio.h>
int main(){
   
   int a[] = { 0,0,0,1,1,1,0};
   int count_0=0,count_1=0,i;
   int n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++){
       if(a[i]==0){
           count_0++;
           printf("position is %d\n",a[i],i);
       }
      else{
      count_1++;
           printf("position is  %d\n",a[i],i);
   }
   printf("no of zeros in array is %d\n",count_0);
   printf("no of ones in array is %d\n",count_1);
   }
}