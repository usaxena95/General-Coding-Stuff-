#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int ;
	scanf("%d",&t);
	int i;
	long long int x[4],y[4],a[4],b[4];
	for(i=0;i<t;i++)
	{
		int j,k;
		for(j=0;j<4;j++)
		{
			scanf("%lld %lld",&x[j],&y[j]);
			a[i]=x[i];
			b[i]=y[i];
		}
		sort(a,a+4);
		sort(b,b+4);
		long long int count = pow((b[2]-b[1],2))
		for(j=a[0];j<a[3];j++)
		{
			for(k=b[0],k<b[1];k++)
			{
				///check
			}
		}
		for(j=a[0];j<a[1];j++)
		{
			for(k=b[1],k<b[3];k++)
			{
				///check
			}
		}
		for(j=a[1];j<a[3];j++)
		{
			for(k=b[2],k<b[3];k++)
			{
				///check
			}
		}
		for(j=a[2];j<a[3];j++)
		{
			for(k=b[1],k<b[2];k++)
			{
				///check
			}
		}


		
		

	return 0;
}
