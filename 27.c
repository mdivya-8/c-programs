#include<stdio.h>
int main()
{
    int i,j,rows=5,a=1,b=2,c=a+b,d;
    printf("%d\n%d %d\n",a,b,c);
	for(i=3;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
		    d=b+c;
			printf("%d ",d);
			if(i==rows-2)
			{
			    if(j%2 != 0)
			        b=d;
			    else if(j%2 == 0)
			        c=d;
			}
			else if(i==rows-1)
			{
			    if(j%2 != 0)
			        c=d;
			    else if(j%2 == 0)
			        b=d;
			}
			else if(i==rows)
			{
			    if(j%2 != 0)
			        b=d;
			    else if(j%2 == 0)
			        c=d;
			}
			
			    
		}
		printf("\n");
	}
	return 0;
}

