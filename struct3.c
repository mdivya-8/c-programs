#include<stdio.h>
//#define MAX 3
struct student
{
int roll;
char name[20];
float marks;
};
void main()
{
struct student stu[3];
int i;
for(i=0;i<3;i++)
{
printf("enter roll.no:");
scanf("%d",&stu[i].roll);
printf("enter name:");
scanf("%s",stu[i].name);
printf("enter marks:");
scanf("%f",&stu[i].marks);
}
for(i=0;i<3;i++)
{
printf("\n student roll no:%d",stu[i].roll);
printf("\n student name:%s",stu[i].name);
printf("\n student marks:%f\n",stu[i].marks);
}
printf("size of stu:%ld",sizeof(stu));
}