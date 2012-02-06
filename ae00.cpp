#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int isprime(int n)
{
	int i,j=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}
	if(j>1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int nofac(int n)
{
	int i,j=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}
	return j;

}
int norec(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(isprime(n)==1)
	{
		return norec(n-1)+1;
	}
	else
	{
		return norec(n-1)+nofac(n);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	//	printf("%d",isprime(n));
	printf("%d",norec(n));
	return 0;
}
