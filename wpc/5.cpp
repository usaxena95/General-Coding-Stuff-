#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
long long int pre[10000];
long long int f(long long int);
long long int g(long long int);
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	//long long int pre[10000];
	for(i=0;i<10000;i++)
	{
		if(i==0)
		{
			pre[i]=1;
		}
		else
		{	
			pre[i]=g(i);
		}
	}
	while(t)
	{
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",f(n));
		t--;
	}
	return 0;
}

long long int g(long long int n)
{
		 	long long int sum=f(n/2)+f(n/5)+f(n/7); 
			return sum;
}

long long int f(long long int n)
{
	if(n<10000)
	{
		return pre[n];
	}
	else
	{
	
		 	long long int sum=f(n/2)+f(n/5)+f(n/7); 
			return sum;
	}
}	
