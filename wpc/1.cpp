#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
long long int f(int,int);
long long int a[30][30];
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int i,j;
		//int a[k][n];
		for(i=0;i<30;i++)
		{
			for(j=0;j<30;j++)
			{
				a[i][j]=0;
			}
		}
		long long int ans= f(n,k);
		printf("%lld\n",ans);
	

		t--;
	}
	return 0;
}

long long int f(int n,int k)
{
	if(a[n][k]==0)
	{
	
	if(n==0)
	{
		return k;
	}
	else
	{
		long long int j=1,sum=0;
		for(j=1;j<=k;j++)
		{
			sum+=f(n-1,j);
		}
		a[n][k]=sum;
		return sum;
	}
	}
	else
	{
		return a[n][k];
	}
}
		
