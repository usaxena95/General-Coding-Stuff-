#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int a[500];

int main()
{
	int t;
	scanf("%d",&t);
	int n,m,d,i;
hell:
	while(t--)
	{
		for(i=0;i<500;i++)
		{
			a[i]=0;
		}
		scanf("%d %d %d",&n,&m,&d);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(i=m;i>0;i--)
		{
			a[n-1]-=d;
			if(a[n-1]>0)
			{
				sort(a,a+n);
				continue;
			}
			else
			{
				printf("NO\n");
				goto hell;
					
			}
		}
		printf("YES\n");
	}
	return 0;
}
