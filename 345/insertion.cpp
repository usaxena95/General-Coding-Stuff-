#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;


int main()
{
	int t;
	scanf("%d",&t);
	int i,a[t],j,k,s;
	for(i=0;i<t;i++)
	{
		a[i]=0;
	}
	for(i=0;i<t;i++)
	{
		scanf("%d",&j);
		if(i==0)
		{
			a[0]=j;
		}
		else
		{
			for(k=0;k<i;k++)
			{
				if(j>a[k])
				{
					continue;
				}
				else
				{
					break;
				}
			}
//			if(k!=i)
//			{
				for(s=t-1;s>=k+1;s--)
				{
					a[s]=a[s-1];
				}
//			}
//			else
//			{
			a[k]=j;
//			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d ",a[i]);
	}
	

	return 0;
}
