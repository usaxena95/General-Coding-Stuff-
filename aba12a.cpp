#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;


int main()
{
	int t;
	long long int a,b;
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",b);
	}
	return 0;
}
