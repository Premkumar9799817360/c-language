#include<stdio.h>
 int main ()
{
	int c;

	printf("Enter the alphabet:");
	scanf("%c",&c);
	if((c>='a'&& c<='z')||(c>='A'&& c<='Z')){
		printf("%c is alphabet",c);
	}
	else {
		printf("%c is not alphabet",c);
	}
	
	return 0;
	
}
	
	