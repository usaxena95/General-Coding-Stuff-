#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

//#define  1000000007 1000000007;

using namespace std;
int a[26][1000000];
int	f[26] ={1,1,1,2,1,3,1,4,3,5,1,6,1,7,5,8,1,9,1,10,1,11,1,12,5,13};
//int a[26][1000000];

long long int exp(int x,int y, int mod)
{
	long long  int result=1;
	while(y)
	{
		if((y & 1) == 1)
		{
			result = (result * x)%mod;
		}
		y=y >> 1;
		x= (x*x)%mod;
	}
	return result;
}
/*
long long int exp(int x,int y,long long int mod)
{
	int b=x;
	int e = y;
	long long int c=1;
	int e1=0;
	while(e1!=e)
	{
		e1++;
		c=(b*c)%mod;
	}
	return c;
}
*/
long long int ans(int x,int y)
{
	long long int p = exp(x,y,1000000007);
	long long int q =  exp(x,f[x-1],1000000007 );
	long long int ans = p-q;
	if(ans<0)
	{
		return abs(ans);
	}
	else
	{
		return ans;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int k,n;
		scanf("%d %d",&k,&n);
		printf("%lld\n",ans(k,n)%1000000007);
//		printf("%lld\n",((exp(k,n,1000000007)%1000000007)-(exp(k,f[k-1],1000000007)%1000000007))%1000000007);
	}
	return 0;
}
