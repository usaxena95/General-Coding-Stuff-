#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	int d[n];
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=0;
	}
	int count=0;
	int *ptr;
	for(ptr=d;ptr<=d+n-1;ptr++)
	{
		if((ptr-d)<=b && (d+n-1-ptr)>=a)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

