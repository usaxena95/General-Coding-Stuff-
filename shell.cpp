#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	char i[5];
	char e[10],f[10];
	scanf("%s",i);
	char a= i[0];
	int n;
	scanf("%d",&n);
	if(n==10)
	{
		return 0;
	}
	int j;
	for(j=0;j<n;j++)
	{
		char c[5];
		char d[5];
		scanf("%s",c);
		scanf("%s",d);
		e[j]=c[0];
		f[j]=d[0];
	}
	for(j=0;j<n;j++)
	{
		if(a==e[j])
		{
			a=f[j];
		}
		else if(a==f[j])
		{
			a=e[j];
		}
		else
		{
			continue;
		}
	}
	if(a=='c')
	{
		printf("center\n");
	}
	else if (a=='l')
	{
		printf("left");
	}
	else
	{
		printf("right");
	}


	return 0;
}

