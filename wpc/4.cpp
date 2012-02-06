#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;
long long int pow2(long long int);
int nopow(long long int);
int main()
{
	int t=1;
//	scanf("%d",&t);
	while(t)
	{
		long long int soph=2,sopw=2;
		//scanf("%lld",&soph);
		//scanf("%lld",&sopw);
		long long int i;
		int nop=nopow(soph);
		long long int a[nop],b[nop];
		for(i=0;i<nop;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		
		float ratio;
		int j=0;
		for(i=1;i=pow2(soph);i<<1)
		{
			soph=i;
			ratio=soph/sopw;
			if(ratio<=1.25 && ratio>=0.8)
			{
				while(j<nop)
				{
					a[j]=soph;
					b[j]=sopw;
					j++;
					break;
				}
			}
		}
		int l=0;
		for(l=0;l<nopow(soph);l++)
		{
			printf("%lld %lld \n",a[i],b[i]);
		}
			
				
		t--;
	}
	return 0;
}
long long int pow2(long long int n)
{
	int i,ret;
	for(i=1;i<=n;i<<1)
	{
		ret=i;
	}
	return ret;
}
int nopow(long long int n)
{
	int i,counter=0;
	for(i=1;i<=n;i<<1)
	{
		counter++;
	}
	return counter;
}

