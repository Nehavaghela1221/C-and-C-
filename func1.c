

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


prime(){
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
			printf("notÂ prime");
		}
}


fibo(){
		int n,n1=0,n2=1,i,n3;
	printf("enter number:");
	scanf("%d",&n);
	printf("%d\n",n1);
		printf("%d\n",n2);
		
		for(i=3;i<=n;i++){
			n3=n1+n2;
			
			printf("%d\n",n3);
			
			n1=n2;
			n2=n3;
		}
}
main(){
	int ch;
	while(1){
		//while(1) infinite lloop
		
		
			printf("press 1 fac :");
		printf("\npress 2 add :");
		printf("\npress 3 prime :");
		printf("\npress 4 fibo :");	
		printf("\npress 5 exit:");
		scanf("%d",&ch);
		if(ch==1){
			fac();
		}
		else if(ch==2){
			add();
		}
		else if(ch==3){
			prime();
		}
		else if(ch==4){
			fibo();
		}
		else if(ch==5){
			printf("Thankkk u....");
				break;
		}
		else {
				printf("Invalid choiseee....");
				break;
		}
	}
}
