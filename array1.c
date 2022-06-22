#include <stdio.h>
int main()
{
    int arr[20],i,j,k,size;
    printf("number of elements in array:");
    scanf("%d",&size);
    printf("\n enter the array ");
for (i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
    
 }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
            for(k=j;k<size-1;k++)
            {
                arr[k]=arr[k+1];
            }
            size--;
            j--;
        }
        
        
    }
}
printf("\n array element delete dupilcate element:");
for(i=0;i<size;i++)
{
    printf("%d\t",arr[i]);
}
}