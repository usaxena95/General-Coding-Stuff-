#include<iostream>
#include<time.h>
#include<cstdio>
#include<cstdlib>
#include<math.h>

using namespace std;

int main()
{
	int i;
	FILE *file;
	
	file=fopen("input.txt","w");
	fprintf(file,"1\n" );
	fprintf(file," 500 	
	for(i=0;i<1;i++)
	{
	
		int t=rand()%; 
		int s=rand()%1000000; 
		fprintf(file,"%d %d\n",t,s);
		/*int j,b[t];
		for(j=0;j<t;j++)
		{
			b[j]=rand()%1000;
			fprintf(file,"%d ",b[j]);
		}
	*/		
	}		
	//	fprintf(file,"\n-1");	
		
	
	fclose(file);
}
