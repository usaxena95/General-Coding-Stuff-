#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<cstdlib>
#define Pi  3.1415926535897932384626433832795
#define epsilon 0.000001
using namespace std;

bool is_equal(long double d1, long double d2) 
{
        if(fabs(d1-d2)<epsilon)
                return true;
        return false;
}

int main()
{
	 long double n,r,r1;
	 scanf("%llf %llf %llf",&n,&r,&r1);
	 long double ans;
//	printf("%lf\n",asin(r1/(r-r1)));
	if(r==r1)
	{
		if(n>1)
		{
			printf("NO\n");
			return 0;
		}
		else
		{
			printf("YES\n");
			return 0;
		}
	}	
	else
	{

	ans = Pi/( asin(r1/(r-r1)));
//	printf("%lf %lf\n",ans,n);

	if( ans>n || is_equal(ans,n))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	}

	return 0;
}
