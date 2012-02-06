#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;


long long int  bin(long long int,long long int ,long long int,long long int);
int main()
{
	int t;
//	scanf("%d",&t);
	t=1;
	while(t)
	{
		printf("\n");
		long long int n;
		n=100000000000000;
		int  k;
		k=3;
		long long int  i;
		long long int b[k];
		scanf("%lld %d",&n,&k);
		long long int a = bin(1,sqrt(n),n,k);
		for(i=0;i<k;i++)
		{
				b[i]=( (a-2)* (a-1) * k)/2 + (a-1) * (i+1) ;
				n-=( (a-2)* (a-1) * k)/2 + (a-1) * (i+1);
		}
		i=0;
		while(1)
		{
			n-= (a-1) * k + i + 1 ;
			if(n>=0)
			{
				b[i] += (a-1) * k + i + 1;
				i++;
				if(i==k)
				{
					i=0;
				}
			}
			else
			{
				break;
			}
		}
		b[i]=b[i]+n+(a-1)*k +i+1;
		for(i=0;i<k;i++)
		{
			printf("%lld ",b[i]);
		}
		t--;
	}
	return 0;
}

long long int  bin(long long int low,long long int high,long long int n,long long int k)
{
	while(low<high)
	{
		long long int mid = low + (high - low)/2;
		long long int v = ( mid * mid * k * k + mid * k )/2;
		if( v==mid)
			return mid;
		else
		{
			if (v>n)
			{
				high  = mid;
			}
			else
			{
				low = mid + 1;
			}
		}
	}
	return high;
}

