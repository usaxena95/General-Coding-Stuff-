#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	long long int m;
	scanf("%d %lld",&t,&m);
	int i,a[t],j,k;
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	long long int val,mval=0;
	for(k=0;k<t;k++)
	{
		val=0;
		for(i=k;i<t;i++)
		{
			if(val+a[i]<=m)
			{
				val+=a[i];
			}
		}
		if(val>mval)
		{
			mval=val;
		}		
	}		
	if(mval>0)
	{
		printf("%lld\n",mval);
		mval=0;
	}
	return 0;
}
