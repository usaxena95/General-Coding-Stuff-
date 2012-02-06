#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int lucky(long long int);
long long int next[800006];
int main()
{
	long long int l,r;
	scanf("%lld %lld",&l,&r);
	//long long int next[1000];
	long long int i,j=1,count=0;
	next[0]=4;
	while(j<800006)
	{
	for(i=5;i<=100000000;i++)
	{
		if(lucky(i) &&  i>next[j-1])
		{
			next[j]=i;
			//printf("%d",&next[j]);
			j++;
			//break;
		}
	}
	}

	
//	printf("%d",count);
	return 0;
}

int lucky(long long int a)
{
	if(a%10==4 || a%10==7)
	{
		a=a/10;
		if(a==0)
		{
			return 1;
		}
		else if(a%10==4 || a%10==7)
		{
			a=a/10;
			if(a==0)
			{
				return 1;
			}
			else if(a%10==4 || a%10==7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

