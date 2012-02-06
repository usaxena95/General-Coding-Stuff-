#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int t,n,k;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d %d",&n,&k);
		int a[n];
		int i;
		int min=100;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		if(k==1)
		{
			printf("%d",min);
		}
		
		t--;
	}	

	return 0;
}


