#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
char max(char *a,int n);
char min(char*a,int n);
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	char a[n][k];
	int b[n][k];
	char d[k][n];
	int i,j;
	char c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			point:
			scanf("%c",&c);
			if(c!='\n')
			{
				a[i][j]=c;
			}
			else
			{
				goto point;
			}		
		}
	}
	for(j=0;j<k;j++)
	{
		for(i=0;i<n;i++)
		{
			d[j][i]=a[i][j];
		}
	}
	 char value;
	for(i=0;i<k;i++)
	{
	 value=max(*(d+i),n);
		printf("%c ",value);
	}
	//printf("%d",a[0][1]-a[0][2]);
	/*
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",a[j][i]);
		}
		printf("\n");
	}
	*/
		
	return 0;

}
char max(char *a,int n)
{
	char *ptr=a;
	char max;
	for(;ptr<a+n-1;ptr++)
	{
		if(*a>*ptr)
		{
			max=*a;
		}
	}
	//max=atoi(&max);
	return max;
}
char min(char *a,int n)
{
	char *ptr=a;
	char min;
	for(;ptr<a+n-1;ptr++)
	{
		if(*a<*ptr)
		{
			min=*a;
		}
	}
	//min=atoi(&min);
	return min;
}



		
