#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>


using namespace std;


int main()
{
	int r1,r2,c1,c2,d1,d2;
	cin >> r1>> r2>>c1>>c2>>d1>>d2;
	int i;
	for(i=1;i<=9;i++)
	{
		int a = i;
		int b = r1 - a;
		int c= c1-a;
		int d = d1-a;
		int x = c1+d1-2*i;
		int y=c1+r1-2*i;
		if((x==r2) && (y==d2))
		{
//			printf("reached\n");
			if(a!=b && b!=c && c!=d && d!=a && a!=c && a!=d && b!=d && a<=9 && b<=9 && c<=9 &&
			   d<=9 && a>0 && b>0 && c>0 && d>0)
			{
				printf("%d %d\n",a,b);
				printf("%d %d\n",c,d);
				break;
			}
		}
		else
		{
			if(i==9)
			{
				printf("-1\n");
			}
		}
	}

	return 0;
}
