#include<stdio.h>

fac(){
	int i,n ,fac=1;
		printf("\nenter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac*=i;	
		}
		return fac;
}




add(){
	int n1,n2;
	printf("enter number for sum:");
	scanf("%d",&n1);
		printf("enter number for sum:");
	scanf("%d",&n2);
	return n1+n2;
	
}
main(){
	int result=add();
	printf("%d",result);
	printf("%d",fac());

	
}

//In C programming, return 0; is typically used at the end of the main function to indicate successful program execution./
