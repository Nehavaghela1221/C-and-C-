#include<stdio.h>
main()
{
	int a[2][3] ,b[2][3];
	int i,j;
	for(i=0;i<2;i++) 
	
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter num :");
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n*");
	for(i=0;i<2;i++) 
	
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter num :");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n***addition\n");
	for(i=0;i<2;i++) 
	
	{
		for(j=0;j<3;j++)
		{
		
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
}
