//Function_witout_retunvalue_without_parameter---Type 1



#include<stdio.h>

fac(int n){
	int i ,fac=1;
	
	for(i=1;i<=n;i++){
		fac*=i;	
		}
		printf("\nenter number:%d",fac);
}




add(int n1,int n2){

		printf("\nsum:%d",n1+n2);

	
}
main(){
	 int a;
	 printf("enter nuber");
	 scanf("%d",&a);
	 fac(a);
	 add(5,10);
	
}
