#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
//long long int func(long long int,int,int);
int main()
{
	int t;
	long long int n;
	int k;
	scanf("%d",&t);
	while(t)
	{
		scanf("%lld %d",&n,&k);
		long long int a[k];
		int i;
		int count=0;
		for(i=0;i<k;i++)
		{
			a[i]=0;
		}
		while(n>0)
		{
			for(i=0;i<k;i++)
			{
				if(n<=0)
				{
					break;
				}
				else
				{
					int z=count * k +i+1;
					if(n>=z)
					{
						a[i]+=z;
						n-=z;
					}
					else
					{
						
						a[i]+=n;
						n=0;
					}
				}	

			}
			count++;
		}	

		for(i=0;i<k;i++)
		{
			printf("%lld ",a[i]);
			if(n==k-1)
			{
				printf("\n");
			}
		}
		t--;
	}
	return 0;
}

