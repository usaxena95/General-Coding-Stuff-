#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;


int main()
{
	int n;
	scanf("%d\n",&n);
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the source vertex:\n");
	int s;
	scanf("%d",&s);
	int s1=s;
	int min[n],count=1;
	for(i=0;i<n;i++)
	{
		if(i!=s)
		{
			min[i]=27;
		}
		else
		{
			min[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if( i!=s)
		{
			if(a[i][s]!=0)
			{
				min[i]=count++;
				if(s==s1)
				{
					count=0;
				}
				s=i;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",min[i]);
	}
		

	return 0;
}
