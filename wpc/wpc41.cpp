#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstdlib>
#include<math.h>

#define EPSILON 0.0000001;

using namespace std;

bool AreSame(long double a, long double b)
{
    return fabs(a - b) < EPSILON;
}
int upper( long double j )
{
	if(j>1.25)	
	{
		return 0;
	}
	return 1;
}

int lower(long double j)
{
	if(j<0.80)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int h,w;
	scanf("%d %d",&h,&w);
	int i,i1,i2;
	int  min1,min2;
	for(i=0;i<=6;i++)
	{
		if(w>=pow(2,i))
		{
			min1= w - pow(2,i);
			i1=i;
		}
	}
	min1*=h;
	for(i=0;i<=6;i++)
	{
		if(h>=pow(2,i))
		{
			min1= h - pow(2,i);
			i2=i;
		}
	}
	min2*=w;
	if(min1<min2)
	{
		w=pow(2,i1);
	}
	else if(min1>min2)
	{
		h=pow(2,i2);
	}
	long double j=h/w;
	printf("%llf",j);
	
		if( !upper(j) )
		{
			while(!upper(j))
			{
				h--;
			}
		printf("%d %d",h,w);

		}
		else if(!lower(j))
		{
			while(!lower(j))
			{
				w--;
			}
		printf("%d %d",h,w);

		}
		else
		{
			printf("%d %d",h,w);
		}	




	return 0;
}
