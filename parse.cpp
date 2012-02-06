#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{
	FILE * f,*g;
	f=fopen("parse.txt","r");
//	g=fopen("result.txt","w+");
//	fprintf(f," int a[2500]=");
	int i,n;
	fscanf(f,"%d",&n);

	while(n!=EOF)
	{
	i++;
	fscanf(f,"%d",&n);
	}	
	printf("%d",i);
	return 0;
}

