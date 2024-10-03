#include<stdio.h>
main(){
	char n;
	char n1;
	int choice;
	printf("enter choise");
	while(1){
		printf("\npress 1 for enter game");
		printf("\npress 2 for exit");
		fflush(stdin);
		printf("\nEnter choise:");
		scanf("%d",&choice);
		
		if(choice==1){
			
			
			
			
		fflush(stdin);
		printf("enter name");
		scanf("%c",&n1);
		
		
		
		printf ("welcome game %c ******************",n1);
		printf("\n quetion 1, who is prime minnistry??");
		printf("\n A.Narendara modi");
		printf("\n B.rahul gandhi");
		printf("\n C.Baba Ramdev");
		printf("\n D.soniya gandhi");
			printf("\nEnter answer:");
		scanf("%c",&n);
		if(n=='A'||n=='a'){
			printf("it's true 7 cr..................'");
		}
		else{
			printf("garrr jaoooooo....bye");
		}
		}
		else if(choice==2){
			printf("thank you");
			break;
		}
		
		else{
			printf("invalid choise");
		}
		
		
	}
}
