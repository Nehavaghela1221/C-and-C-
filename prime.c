	#include<stdio.h>
main(){
	int n,c=0,i;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	
	}
		if(c==2){
			printf("prime");
		}
		else{
			printf("not prime");
		}
}