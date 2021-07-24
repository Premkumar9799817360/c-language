#include<stdio.h>
void main()
{
 int num1,num2,num3;
 printf("Enter the three number is \n");
 scanf("%d%d%d",&num1,&num2,&num3);
 if(num1>num2 && num1>num3 && num1>num4){
 	printf("num1 is greteet");
 	
 }
 else if (num2>num1 &&num2>num3 && num2>num4 ){
 	
 	printf("num2 is gretest");
 }
 else if (num3>num1 && num3>num2 && num3>num4){
 	printf("num3 is gretest");
 	
 }
 else if (num4>num1 && num4>num2 &&num4>num3){
 	printf("num4 is gretest");
 }
}