#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	FILE * f;
	f=fopen("in1.txt","w+");
	int i;
	for(i=0;i<100;i++)
	{
		fprintf(f,"H");
	}
	for(i=0;i<200;i++)
	{
		fprintf(f,"C");
	}
	for(i=0;i<100;i++)
	{
		fprintf(f,"A");
	}
	for(i=0;i<100;i++)
	{
		fprintf(f,"E");
	}
	for(i=0;i<100;i++)
	{
		fprintf(f,"R");
	}
	for(i=0;i<100;i++)
	{
		fprintf(f,"U");
	}
	for(i=0;i<100;i++)
	{
		fprintf(f,"K");
	}
	for(i=0;i<100;i++)
	{
		fprintf(f,"P");
	}
	fclose(f);
	return 0;
}
