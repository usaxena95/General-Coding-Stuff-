#include<iostream>
#include<stdio.h>
#include<stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int ng,nm,i,j;
	int maxa=0,maxb=0;
	for(i=0;i<t;i++)
	{
		scanf("%d",&ng);
		scanf("%d",&nm);
		int a[ng],b[nm];
		for(i=0;i<ng;i++)
		{
			scanf("%d ",&a[i]);
		}
		//maxa=a[0];
		for(i=0;i<ng;i++)
		{
			if(maxa<a[i])
			{
				maxa=a[i];
			}

		}
		for(j=0;j<nm;j++)
		{
			scanf("%d",&b[j]);
		}
		//maxb=b[0];
		for(j=0;j<nm;j++)
		{
			if(maxb<b[j])
			{
				maxb=b[j];
			}
		}
		if(maxb>maxa)
		{
			printf("MechaGodzilla\n");
		}
		else
		{
			printf("Godzilla\n");
		}
		
	
	}
	return 0;
}
