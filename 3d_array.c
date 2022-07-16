//1. accessing the elements by 3d-array
#include <stdio.h>
int main()
{
    int i,j,k;
  int a[2][2][3]={10,20,30,40,50,60,70,80,90,100,110,120};//method-1
   int b[2][2][3]={{{100,200,300},{400,500,600}},{{700,800,900},{1000,1100,1200}}};//method2
   printf("%d\n",a[0][0][1]);//accessing first 2d array of zero row  first column=20
   printf("%d\n",a[1][1][0]);//accessing second 2d array of first row zero column=100
   printf("%d\n",b[0][1][2]);//accessing first 2d array of first row second column=600
   for(i=0;i<2;i++){
      for(j=0;j<2;j++){
          for(k=0;k<3;k++){
    printf("%p %d\n",&a[i][j][k],a[i][j][k]);         
}
printf("base address of the array=%p,address of first element is %p\n",a,&a[0][0][1]);
printf("base address of the array=%p,address of first element is %p\n",b,&b[0][0][1]);
}
}
}