#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
//	FILE * file;
//	file=fopen("input.txt","r");
	int a[100][50];
	char b[100][50];
	int i,j,c;
	char h;
	FILE * file;
	file=fopen("input.txt","r");
//	printf("\n");
	for(i=0;i<100;i++)
	{
		for(j=0;j<50;j++)
		{
			point:
			fscanf(file,"%c",&h);
			if(h=='\n')
			{
				goto point;
			}
			a[i][j]=atoi(&h);
		}	

	}
	fclose(file);
	printf("\n-------------------------------------------\n");
	for(i=0;i<100;i++)
	{
		for(j=0;j<50;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

	printf("--------------------------------------------");
	int d[55];
	int sum,t=0;
	for(j=0;j<55;j++)
	{
		sum=0;
			for(i=0;i<100;i++)
			{
				if(j<=49)
				{
					sum=sum+a[i][j];
				}
			}
		d[j]=(sum+t)%10;
		printf("%d",d[j]);
		t=(sum+t) / 10;
	}
	
//	fclose(file);
	return 0;
}

		

		

