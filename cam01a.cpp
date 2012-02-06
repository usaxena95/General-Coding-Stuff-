#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int n=55,k=10;
//	scanf("%d %d",&n,&k);
	float f = 2 *float(n) / k;
	int u = 2 *float(n)/k;
	float diff = f-u;
	if(diff!=0)
	{
		printf("Padam sotha machi!\n");
		return 0;
	}
	int a,d;
	int sum,count=0;
	if(k!=1)
	{
		for(a=1;a<=u/2;a++)
		{
			for(d=1;(d<u/(k-1));d++)
			{
				sum= 2*a+(k-1)*d;
				if(sum==u)
				{
					printf("Padam tharumaru machi!\n");
					count++;
					goto hell;
				}
			}	
		}
	}	
	else
	{
		for(a=1;a<=u/2;a++)
		{
			sum= 2*a;
			if(sum==u)
			{
				printf("Padam tharumaru machi!\n");
				count++;
				goto hell;
			}
			
		}
	}

		
	
hell:
	if(count==0)
		printf("Padam sotha machi!\n");
return 0;
}
