#include<stdio.h>
main(){
		int a[4];
	int i;
	int sum=0;

	for(i=0;i<4;i++){
		
		printf("enter number:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<4;i++){
		
		printf("enter number:%d",a[i]);
		
	}
	printf("sum:%d",sum);
}
