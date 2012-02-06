#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int min(int,int);
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int n;
		scanf("%d",&n);
		int a[n*3];
		int i;
		int j=3*n;
		for(i=0;i<j;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=3;i<j;i++)
		{
			if(i%3==0)
			{
				a[i]=min(a[i-1]+a[i],a[i-2]+a[i]);
			}
			else if(i%3==1)
			{
				a[i]=min(a[i-2]+a[i],a[i-4]+a[i]);
			}
			else
			{
				a[i]=min(a[i-4]+a[i],a[i-5]+a[i]);
			}
		}
		int ans=min(min(a[j-3],a[j-2]),min(a[j-2],a[j-1]));
		printf("%d\n",ans);


		t--;
	}
	return 0;
}

int min(int a,int b)
{
	if (a>b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

