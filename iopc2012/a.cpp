#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	char c[20];	
	FILE *a ,*b;
	a=fopen("output2.txt","r");
	b=fopen("out2.txt","w");
	int i;
	fprintf(b,"a[166]={");
	for(i=0;i<166;i++)
	{
		fscanf(a,"%s",c);
		fprintf(b,"%s,",c);
	}
	fprintf(b,"}");
	fclose(a);
	fclose(b);



	return 0;
}
