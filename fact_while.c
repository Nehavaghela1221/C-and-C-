#include<stdio.h>
main(){
	int i=1,n,fact;
	printf("enter number:");
	scanf("%d",&n);
	
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial:%d",fact);
	}
