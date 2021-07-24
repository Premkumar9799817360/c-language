#include<stdio.h>
 int main ()
{
	int i=1;
	int n;
	printf("Enter the value of n is :");
	scanf("%d",&n);
	do{
		printf("the value of n is :%d\n",i+2);
		i++;
	} while(i<n);

	
	return 0;

	
	
}