#include<stdio.h>
main()
{
    int arr[]={3,5,2,9,-1,8,-2,0,11};
    int sum=0,i;


    for(i=0;i<sizeof(arr)/4;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
            printf("%d + ",arr[i]);
        }
        if(arr[i]<0)
        {
            continue;
        }
        if(arr[i]==0)
        {
            break;
        }
    }
    printf("\n%d",sum);
}