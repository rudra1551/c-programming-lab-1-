#include<stdio.h>
int main()
{
float sub1,sub2,sub3,total,average;
printf("Enter marks of sub1:");
scanf("%f",&sub1);
printf("Enter marks of sub2:");
scanf("%f",&sub2);
printf("Enter marks of sub3:");
scanf("%f",&sub3);
total=sub1+sub2+sub3;
average=total\3.0;
printf("Total Marks=%2f\n",total);
printf("Average Marks=%2f\n",average);
if(sub1<35 || sub2<35 || sub3<35)
{
printf("result=fail);
}
else if(average>=70)
{
printf("Result=Distinction");
}
else if(average>=60)
{
printf("Result=First");
}
else if(average>=50)
{
printf("Result=Second");
}
else if(average>=35)
{
printf("Result=Third Class");
}
return 0;
}


