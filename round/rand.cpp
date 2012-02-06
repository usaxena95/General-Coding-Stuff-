#include<iostream>
#include<time.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
	int i;
	FILE *file;
	
	file=fopen("input.txt","w");
	fprintf(file,"100\n");
	for(i=0;i<100;i++)
	{
		int t=rand()%100;
		
		fprintf(file,"%d\n",t);
		int j,b[t];
		for(j=0;j<t;j++)
		{
			b[j]=rand()%1000;
			fprintf(file,"%d ",b[j]);
		}
			
		
		fprintf(file,"\n");	
	}
	fclose(file);
}
