#include<stdio.h>
main(){
	int a,b;
	 
	 printf("Enter value 1:");
	 scanf("%d",&a);
	 printf("Enter value 2:");
	 scanf("%d",&b);
	 printf("A:%d",a);
	 printf("\nB:%d",b);
	 
	 printf("\nAddition: %d",a+b);
	printf("\nSubtraction: %d",a-b);
	printf("\nMulti: %d",a*b);
	printf("\nDivison: %.2f",(float)a/b); //type casting
}
