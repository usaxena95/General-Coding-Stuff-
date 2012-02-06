#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c= a-b;
	int ans;
	if(c%10==0)
	{
		ans=c+1;
	}
	else
	{
		ans = (c/10) *10;
	}
	if (ans>=10)
	{
		printf("%d",ans);
	}
	else
	{
		int t=c+1;
		if(t==10)
		{
			printf("8");
		}
		else
		{
			printf("%d",t);
		}
	}
	return 0;
}

