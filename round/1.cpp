#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int lucky(int);
int main()
{
	int n;
	scanf("%d",&n);
	//printf("%d",lucky(n));
	
	if(lucky(n))
	{
		printf("YES\n");
		
	}
	else
	{
		int j,count=0;
		for(j=4;j<n;j++)
		{
			if(n%j==0 && lucky(j))
			{
				printf("YES\n");
				count++;
				break;
			}
		}
		if(count==0)
		{
			printf("NO\n");
		}
		
	}
	return 0;
}

int lucky(int a)
{
	if(a%10==4 || a%10==7)
	{
		a=a/10;
		if(a==0)
		{
			return 1;
		}
		else if(a%10==4 || a%10==7)
		{
			a=a/10;
			if(a==0)
			{
				return 1;
			}
			else if(a%10==4 || a%10==7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

