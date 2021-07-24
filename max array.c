#include<stdio.h>

int main(){
    int a[20],i,n,flog=0,max;
    printf("Enter the integer :");
     scanf("%d",&n);
     printf("Enter %d integer");
     for(i=0;i<n; i++){
     	printf("Enter element at index %d :\n",i);
     	scanf("%d",&a[i]);
     	
//     	sum += a[i];
	 }
     max=a[0];
     for(i=0;i<n;i++){
     	if(a[i]>max){
     		max=a[i];
		 }
	 } 
	 printf("array has follwoing element\n");
	 for(i=0;i<n;i++){
	 	printf("%d\n",a[i]);
	 }
	 printf("\n the max element of the array is %d\n",max);

    return 0;
}