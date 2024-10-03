#include<stdio.h>
main(){
	char a[5],b[5];
	printf("enter name1:");
	gets(a);
	printf("enter name1:");
	gets(b);
	
	printf("merge :%s",strcat(a,b));
}
