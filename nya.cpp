#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int b;
	scanf("%d",&b);
	while(b)
	{
	int n;
	scanf("%d",&n);
	char a[40];
	int count[8];

	scanf("%s",a);
	int i;

	for(i=0;i<8;i++)
	{
		count[i]=0;
	}
	for(i=0;i<38;i++)
	{
		if(a[i]=='T')
		{
			if(a[i+1]=='T')
			{
				if(a[i+2]=='T')
				{
					count[0]++;
				}
				else
				{
					count[1]++;
				}
			}
			else
			{

					if(a[i+2]=='T')
					{
						count[2]++;
					}
					else
					{
						count[3]++;
					}

			}
		}
		else
		{
			if(a[i+1]=='T')
			{
				if(a[i+2]=='T')
				{
					count[4]++;
				}
				else
				{
					count[5]++;
				}
			}
			else
			{

					if(a[i+2]=='T')
					{
						count[6]++;
					}
					else
					{
						count[7]++;
					}
				
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		if(i==0)
		{
			printf("%d ",n);
		}
		printf("%d ",count[i]);
		if(i==7)
		{
			printf("\n");
		}
	}
	b--;	
	}
	return 0;
}
