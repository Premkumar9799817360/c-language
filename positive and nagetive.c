#include<stdio.h>
 int main ()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if (num>0){
	
	printf("\n%d is positive number.",num);
}
	else if (num<0){
	
	printf("\n%d is negative number.",num);
}
	else {
		printf("%d not positive and negative number this is zero",num);
		
	}
	
	return 0;
	
	
	
	
	
}