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
		long long int ans= f(k,n);
		printf("%lld\n",ans);
	

		t--;
	}
	return 0;
}

long long int f(int k,int n)
{
	
	if(a[k][n]==0)
	{
	
	if(k==0)
	{
		return n;
	}
	else
	{
		long long int j=1,sum=0;
		for(j=1;j<=n;j++)
		{
			sum+=f(k-1,j);
		}
		a[k][n]=sum;
		return sum;
	}
	}
	else
	{
		return a[k][n];
	}
}
		
