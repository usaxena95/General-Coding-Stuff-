#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>

using namespace std;

int a[50][50];
long long int  noways( int i,int j,long long int l)
{
	if(l==1)
	{
		if(a[i][j]==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int p;
	long long int count=0;
	for(p=0;p<j;p++)
	{
		if(a[i][p]==1 && p!=i )
		{
			 count+=noways(i,p,1)*noways(p,j,l-1);
		}
	}
	return count;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
	long long int x ;
	int u,v;
	scanf("%lld %d %d",&x,&u,&v);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%lld\n",noways(u,v,x)%1000000007);	
	}
	return 0;
}

