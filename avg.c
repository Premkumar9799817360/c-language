#include<stdio.h>
int main()
{
 int p,c,m,h,e;
 float sum,avg;
 printf("enter the five subject marks\n");
 scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
 sum = p+c+m+h+e;
 avg = sum/5;
 printf("average of marks=%f",avg);
 return 0;


}