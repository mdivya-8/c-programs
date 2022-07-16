#include<stdio.h>
int main()
{
struct student // student structure
{
int rollno;
char name[10];// structure members
float points;
};
struct student std[3];//student structure variable
struct student *ptr=NULL; // student structure pointer variable
int i; //  for loop
ptr=std; //assign std to ptr
for(i=0;i<3;i++)
{
printf("enter rollno:");
scanf("%d",&ptr->rollno);
printf("enter name:");
scanf("%s",ptr->name);
printf("enter points:");
scanf("%f",&ptr->points);
ptr++; // update ptr to point at next element
}
ptr=std;
for(i=0;i<3;i++)
{
// display result via ptr variable
printf("\nrollno:%d\n",ptr->rollno);
printf("name:%s\n",ptr->name);
printf("points :%f\n",ptr->points);
//display variable via std variable
printf("\nrollno:%d\n",std[i].rollno);
printf("name:%s\n",std[i].name);
printf(" points :%f\n",std[i].points);
 ptr++; // update ptr to point next element
}
return 0;
}