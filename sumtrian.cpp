#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int max(int,int);
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
	int n;
	scanf("%d",&n);	
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			
			scanf("%d",&a[i][j]);
			if(i>=1)
			{
				if(j==0 )
				{
					a[i][j]=a[i][j]+a[i-1][j];
				}
				else if(j==i)
				{
					a[i][j]=a[i][j]+a[i-1][j-1];
				}
				else
				{
					a[i][j]=max(a[i-1][j],a[i-1][j-1])+a[i][j];
				}
			}
					
		}
	}
	int k,maxk=0;
	for(k=0;k<n;k++)
	{
		
		if(a[n-1][k]>maxk)
		{
			maxk=a[n-1][k];
		}
	}
	printf("%d\n",maxk);	
	t--;
	}
}

int max(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
