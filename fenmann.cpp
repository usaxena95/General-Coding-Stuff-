#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		else
		{
			int ans=n;
			ans*=(n+1);
			ans*=(2*n+1);
			ans/=6;
			printf("%d\n",ans);
		}
	}
	return 0;
}

