3. accessing the 2-d array with types of intitialization.

#include <stdio.h>
int main()
{
    int i,j;
  int a[2][3]={10,20,30,40,50,60};//method-1 (initializing type-1 a[2)[3])
  int b[][3]={11,22,33,44,55,66};//(initializing type-2 a[)[3])
   int c[2][3]={{100,200,300},{400,500,600}};//method2
  // int d[][]={......}//we cant initialize like this
   printf("%d\n",a[0][1]);//accessing zero row  first column=20
   printf("%d\n",a[1][0]);//accessing fist row zero column=40
   printf("%d\n",b[0][1]);
   printf("%d\n",b[1][0]);
   for(i=0;i<2;i++){
      for(j=0;j<3;j++){
   printf("&a[%d][%d]=%p,value is=%d\n",i,j,&a[i][j],a[i][j]);//printing the values
    printf("&b[%d][%d]=%p,value is=%d\n",i,j,&b[i][j],b[i][j]);
    printf("&c[%d][%d]=%p,value is=%d\n",i,j,&c[i][j],c[i][j]);
}
printf("base address of the array=%p,address of first element is %p\n",a,&a[0][0]);
}
}