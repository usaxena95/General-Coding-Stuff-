#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int gcd(int,int);
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int amax,bmax,c;
		scanf("%d",&amax);
		scanf("%d",&bmax);
		scanf("%d",&c);
		if(c>amax && c>bmax)
		{
			printf("-1\n");
		}
		else if(c%gcd(amax,bmax)!=0)
		{
			printf("-1\n");
		}
		else
		{
			int counter=0,a=0,b=0;
			while(1)
			{
			if(a==0)
			{
				a=amax;
				counter++;
			}
			else if(b==bmax)
			{
				b=0;
				counter++;
			}
			else
			{
				if(bmax>(a+b))
				{
					b=a+b;
					a=0;
				}
				else
				{	
					int e=bmax-b;
					b=bmax;
					a=a-e;
				}
				counter++;
			}
			if(c==a || c==b)
			{
				//printf("%d\n",counter);
				break;
			}
			}
			int counter1=0;
			 a=0,b=0;
			while(1)
			{
			if(b==0)
			{
				b=bmax;
				counter1++;
			}
			else if(a==amax)
			{
				a=0;
				counter1++;
			}
			else
			{
				if(amax>a+b)
				{
					a=a+b;
					b=0;
				}
				else
				{
					int d=amax-a;
					a=amax;
					b=b-d;
				}
				counter1++;
			}
			if(c==a || c==b)
			{
				//printf("%d\n",counter);
				break;
			}
		
			}
			printf("%d\n",counter>counter1?counter1:counter);

		}
		t--;
	}
	return 0;
}
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
