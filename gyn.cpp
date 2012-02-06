#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,t;
	
	scanf("%d",&n);
	for(t=1;t<=n;++t)
	{
	int b,i;
	char a[80];
	for(i=0;i<80;i++)
	{
		a[i]='0';
	}
	scanf("%d ",&b);
	scanf("%s",a);
	a[b-1]='*';
	int count=0;
	for(i=0;i<80;i++)
	{
		if(a[i]=='0' || a[i]=='*'|| a[i]=='\0')
		{
			continue;
		}
		else
		{
			if(count==0)
			{
				printf("%d ",t);
			}
			count++;	
			printf("%c",a[i]);
		}
	}
	printf("\n");
	}
	return 0;
}
