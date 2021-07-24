#include<stdio.h>
int main(){
int num1,num2 ,choice;
printf("Enter you choice:");
printf(" 1.addition\n2.subtraction\n3.multipication\n4.division");
scanf("%d",choice);
if(choice>4){
	
	printf("select with in the range:\n");
}
else{
	printf("Enter 2 integer number\n");
	scanf("%d%d",&num1,&num2);
}
switch(choice);{
 case 1: printf("%d + %d = %d\n",num1, num2,num1+num2);
breck;
case 2: printf("%d-%d = %d\n",num1, num2,(num1-num2));
breck;
case 3: printf("%d*%d = %d\n",num1, num2,(num1*num2));
breck;
case 4: if(num2!=0){
	
printf("%d/%d = %d\n",num1, num2,(num1/num2));

}
else {
	printf("number can not be divided by 0\n");
	breck;
}
default:printf("you entered wrong choice\n");
breck;
}
return 0;

}