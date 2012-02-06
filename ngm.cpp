#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	long long int n;
	scanf("%lld",&n);
	if(n%10==0)
	{
		printf("2\n");
		return 0;
	}
	else
	{
		printf("1\n");
		long long int a = (n/10)*10;
		printf("%lld\n",(n-a));
	}

	return 0;
}
