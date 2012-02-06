#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	float a,x,y;
	scanf("%f %f %f",&a,&x,&y);
	if(y<=2*a ) 
	{
		if(x>=a/2 || x<= (-a/2)) 
		{
			printf("-1\n");
			goto hell;
		}
		else if (y<a && y>0)
		{
			printf("1\n");
			goto hell;
		}
		else if(y>a)
		{
			printf("2\n");
			goto hell;
		}
		else
		{
			printf("-1");
			goto hell;
		}
	}
	
	int k;
	for(k=(y/a)-2;k<=(y/a);k++)
	{
		if(x>=(a/2) || x<=(-a/2))
		{
			printf("-1\n");
			goto hell;
		}
		else if (y>2*k*a && y< (2*k+1)*a)
		{
			if(x>0)
			{
				printf("%d\n",k+3);
				goto hell;
			}
			else if(x<0)
			{
				printf("%d\n",k+2);
				goto hell;
			}
			else
			{
				printf("-1\n");
				goto hell;
			}
		}
		else if ( y > (2*k+1)*a && y> 2*k*a)
		{
			printf("%d\n",k+4);
			goto hell;
		}
		else
		{
			printf("-1\n");
			goto hell;
		}
	}
hell:
	return 0;
}
	
