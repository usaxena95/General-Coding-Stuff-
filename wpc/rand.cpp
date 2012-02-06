#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	FILE * ptr;
	ptr=fopen("input.txt","w");
	fprintf(ptr,"100\n");
	int i;
	for(i=0;i<100;i++)
	{
		long long int t=rand()%10000000001;
		fprintf(ptr,"%lld %lld\n",t,t);
	}
	fclose(ptr);
	return 0;
}
