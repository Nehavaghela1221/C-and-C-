#include<stdio.h>

fac(){
	int i,n ,fac=1;
		printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac*=i;	
		}
		printf("enter number:%d",fac);
}




add(){
	int n1,n2;
	printf("enter number:");
	scanf("%d",&n1);
		printf("enter number:");
	scanf("%d",&n2);
		printf("sum:%d",n1+n2);

	
}
main(){
	 add()    ;
	 fac();
}
