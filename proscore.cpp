#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int n,p,a[20][20];

int one(int * a,int b,int c)
{
	int i,j,count;
	for(i=0;i<c;i++)
	{
		for(j=0;j<b;j++)
		{
			if(a[j][i]==1)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{


	}
}

int two(int *a,int b,int c)
{
	int i,j,count;
	for(i=0;i<b;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			return 0;
		}
	}
		
	return 1;
}

int three(int *a,int b,int c)
{
	int i,j,count;
	for(i=0;i<b;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]==1)
			{
				count++;
				break;
			}
		}
		if(count==c)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int ans1,ans2,ans3;
	int i,j;
	scanf("%d %d",&n,&p);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			a[i][j]=0;	
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	ans1=one(a,n,p);
	ans2=two(a,n,p);
	ans3=three(a,n,p);
	printf("%d %d %d",ans1,ans2,ans3);
	return 0;
}
