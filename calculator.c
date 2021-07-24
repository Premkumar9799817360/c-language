#include<stdio.h>
int main(){
	int num1,num2 ,opreater,addition,subtraction,multipication,devision;
	printf("Enter the first integer:");
	scanf("%d",num1);
	printf("Enter the opreater:");
	scanf("%d",&opreater);
	printf("Enter the second integer:");
	scanf("%d",num2);
	if(opreater== '+'){
	   printf("num1+num2");	
	}
else if(opreater=='-'){
	printf("num1-num2");	
}
else if(opreater=='*'){
	printf("num1*num2");	
}
else (opreater =='\'){
	printf("num1/num2");	
}
return 0;	
}