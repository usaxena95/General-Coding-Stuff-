#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1],b[n+1],c[1000001];
	int itr;
	for(itr=1;itr<=n;itr++)
	{
		scanf("%d",&a[itr]);
	}
	for(itr=0;itr<=1000000;itr++)
	{
		c[itr]=0;
	//	scanf("%d",&a[itr]);
	}
	for(itr=1;itr<=n;itr++)
	{
		c[a[itr]]=c[a[itr]]+1;
	}
	for(itr=1;itr<=1000000;itr++)
	{
		if(itr>0)
		{
		c[itr]=c[itr]+c[itr-1];
		}
	}
	for(itr=n;itr>=1;itr--)
	{
		b[c[a[itr]]]=a[itr];
		c[a[itr]]=c[a[itr]]-1;
	}
	for(itr=1;itr<=n;itr++)
	{
		printf("%d\n",b[itr]);
	}
	return 0;
}



