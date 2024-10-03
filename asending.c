#include<stdio.h>
main()
{
	int a[4];
	int i,j,temp;

	for(i=0;i<4;i++)
	{
		printf("\n enter the num array 1:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\n enter are : %d",a[i]);
		
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			 if (a[i]<a[j])
			 {
			 	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			 }
		}
	}
		for(i=0;i<j;i++)
		{
				printf("\n asc num : %d",a[i]);
		}
}
