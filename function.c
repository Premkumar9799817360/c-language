#include<stdio.h>
float average(int x,int y,int z);
int main(){
	int x,y,z;
	printf("Enter the value of x is:\n");
	scanf("%d",&x);
	printf("Enter the value of y is:\n");
	scanf("%d",&y);
	printf("Enter the value of z is:\n");
	scanf("%d",&z);
	printf(" the value of average is:%f\n", average(x,y,z));
	return 0;	
}
float average(int x,int y,int z){
float result;
result =(float)(x+y+z)/3;
return result;
}