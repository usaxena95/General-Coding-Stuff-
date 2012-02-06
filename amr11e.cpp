#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>


using namespace std;

int a[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
int main()
{
	FILE * f;
	f=fopen("out.txt","w+");
	fprintf(f,"a[1140]={");
	int i,j,k=0;
	for(i=0;i<18;i++)
	{
		for(j=0;j<19;j++)
		{
			
				fprintf(f,"%d,",a[i]*a[j]);
			k++;	
			
		}
	}
	printf("%d",k);
	fprintf(f,"}\n");
	return 0;
}



