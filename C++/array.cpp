#include<iostream>
using namespace std;

main()
{
	int a[4];
	int i,j,temp;

	for(i=0;i<4;i++)
	{
		cout<<" enter the num array 1:";
		cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<" enter are :"<<a[i]<<endl;
		
	}
	for(i=0;i<4;i++) //o index count
	
	{
		for(j=i+1;j<4;j++) //1 index count
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
				cout<<"asc num :"<<a[i]<<endl;
		}
}
