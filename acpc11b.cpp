#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int mod(int a)
{
	if(a<0)
	{
		return (-a);
	}
	else
	{
		return a;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
//hell:
		int n1,j;
		scanf("%d",&n1);
		int a[n1];
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[j]);
		}
		sort(a,a+n1);
		int n2,k;
		scanf("%d",&n2);
		int b[n2];
		for(k=0;k<n2;k++)
		{
			scanf("%d",&b[k]);
		}
		sort(b,b+n2);
		/*
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[i]);
		}
		for(k=0;k<n2;k++)
		{
			printf("%d ",b[i]);
		}
		*/
		int min=1000000;
		for(j=0;j<n1;j++)
		{
			for(k=0;k<n2;k++)
			{
				if(min > mod(a[j]-b[k]))
				{
					//printf("%d\n",mod(a[j]-b[k]));
					min = mod(a[j]-b[k]);
				/*	if(mod(a[j]-b[k])==0)
					{
						printf("0\n");
						i++;
						goto hell;						
					}*/
				}
				else
				{
					continue;
				}
			}
		}
		printf("%d\n",min);
		
	}




	return 0;
}
