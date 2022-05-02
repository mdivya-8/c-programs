2.accessing the elements of 2d-array using printf and scanf.
#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int a[ROW][COL],i,j;
    printf("enter the values\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("displaying the values");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
     printf("a[%d][%d]=%d\n",i,j,a[i][j]);
     printf("&a[%d][%d]=%p\n",i,j,&a[i][j]);
            
}
}
}