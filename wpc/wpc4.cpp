#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<cstdlib>
#define eps 0.0000001;
using namespace std;

/*bool is_equal(double d1,double d2)
{
	if(fabs(d1-d2)<eps)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/
int main()
{
	double h,w;
	int i;
	double min1=0,min2=0,area=0;
	int i1,i2;
	h=2,w=1;
//	scanf("%lf %lf",&h,&w);
	if(w>h)
	{
		if(w>(1.25*h) )
		{
			w=1.25*h;
			for(i=0;i<=7;i++)
			{
				if( w - pow(2,i)>=0)
				{
					min1= w - pow(2,i);
					i1=i;
				}
			}
			min1*= h;
			for(i=0;i<=7;i++)
			{
				if( h - pow(2,i)>=0)
				{
					min2= h - pow(2,i);
					i2=i;
				}
			}
			min2*= w;
			if(min1<min2)
			{
				w=pow(2,i1);
				area=h*w;
			}
			else
			{
				h=pow(2,i2);
				area=h*w;
			}
			printf("%lf",area);

		}
		else
		{
			for(i=0;i<=7;i++)
			{
				if( w - pow(2,i)>=0)
				{
					min1= w - pow(2,i);
					i1=i;
				}
			}
			min1*= h;
			for(i=0;i<=7;i++)
			{
				if( h - pow(2,i)>=0)
				{
					min2= h - pow(2,i);
					i2=i;
				}
			}
			min2*= w;
			if(min1<min2)
			{
				w=pow(2,i1);
				area=h*w;
			}
			else
			{
				h=pow(2,i2);
				area=h*w;
			}
			printf("%lf",area);			
		}
	}
	else if(w<h)
	{
		if(h>(1.25 * w))
		{
			h=1.25*w;
			for(i=0;i<=7;i++)
			{
				if( w - pow(2,i)>=0)
				{
					min1= w - pow(2,i);
					i1=i;
				}
			}
			min1*= h;
			for(i=0;i<=7;i++)
			{
				if( h - pow(2,i)>=0)
				{
					min2= h - pow(2,i);
					i2=i;
				}
			}
			min2*= w;
			if(min1<min2)
			{
				w=pow(2,i1);
				area=h*w;
			}
			else
			{
				h=pow(2,i2);
				area=h*w;
			}
			printf("%lf",area);

		}
		else
		{
			for(i=0;i<=7;i++)
			{
				if( w - pow(2,i)>=0)
				{
					min1= w - pow(2,i);
					i1=i;
				}
			}
			min1*= h;
			for(i=0;i<=7;i++)
			{
				if( h - pow(2,i)>=0)
				{
					min2= h - pow(2,i);
					i2=i;
				}
			}
			min2*= w;
			if(min1<min2)
			{
				w=pow(2,i1);
				area=h*w;
			}
			else
			{
				h=pow(2,i2);
				area=h*w;
			}
			printf("%lf",area);			
		}

		
	}


				
	return 0;
}
