#include<stdio.h>
main()
{
	FILE*fir; //fir variable name koi pn apay
//	fir=fopen("test1.txt","w");
//	fprintf(fir,"this is wright file.");
	fir=fopen("test1.txt","a");
	fprintf(fir,"this is append file.");
	fclose(fir);
}
