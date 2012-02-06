#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

long long int hp(long long int);
int checkratio(long double,long double);
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		long long int h,w;
		scanf("%lld %lld",&h,&w);
		//int c=checkratio(h,w);
		//printf("%d",c);
		long long int a[4];
		int l;
		for(l=0;l<4;l++)
		{
			a[l];
		}
		long long int i=hp(h);
		while(i>=1)
		{
			if(checkratio(i,w))
			{
				a[0]=i;
				a[1]=w;
				//printf("%d %d\n",i,w);
				break;
			}
			i=i>>1;
		}
	//	printf("%lld %lld",a[0],a[1]);
		long long int j=hp(w);
		while(j>=1)
		{
			if(checkratio(h,j))
			{
				a[2]=h;
				a[3]=j;
				//printf("%d %d\n",i,w);
			}
			j=j>>1;
		}
		if(a[0]*a[1]>a[2]*a[3])
		{
			printf("%lld %lld\n",a[0],a[1]);
		}
		else if(a[0]*a[1]<a[2]*a[3])
		{
			printf("%lld %lld\n",a[2],a[3]);
		}
		else
		{
			if(a[0]>=a[2])
			{
				printf("%lld %lld\n",a[0],a[1]);
			}
			else 
			{
				printf("%lld %lld\n",a[2],a[3]);
			}
		}
		t--;
	}
}

long long int hp(long long int n)
{
	long long int i,ret;
	for(i=2;i<=n;i=i<<1)
	{
		ret=i;
	}
	//printf("%lld",ret);
	return ret;
}

int checkratio(long double h,long double w)
{
	long double c =h/w;
	if(c<1.26 && c>0.79)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
