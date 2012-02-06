#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>


using namespace std;


long long int g(long long int n,long long int m,long long int k);
long long int h(long long int n);

int main()
{
	long long int t,n,m,k,i;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld %lld %lld",&n,&m,&k);
		long long int ans= g(n,m,k);
		long long int ans1 = h(n)+h(m)+h(k);
		printf("Case #%lld: %lld %lld\n",i,ans,ans1);
	}
	return 0;
}

long long int g(long long int n,long long int m,long long int k)
{
	return (n*m*k) -1 ;
}
long long int h(long long int n)
{
	if(n==1)
	{
		return 0;
	}
	else
	{
		if(n%2==0)
		{
			return (1 + h(n/2));
		}
		else
		{
			return (1 + h((n+1)/2));
		}
	}
}
