#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
long int a[1001];
int global=0;
typedef struct array array;
struct array
{
	 long int a;
	 long int b;
};

array c[1000];
 long int f (  long int n)
{
	int i;
	for(i=0;i<1000;i++)
	{
		if(c[i].a==n)
		{
			return c[i].b;
		}
	}

	if(n==0)
	{
		c[global].a=0;
		c[global].b=0;
		global++;
		return 0;
	}

	if(n>= (f(n/2) + f(n/3) + f(n/4)) )
	{
		c[global].a=n;
		c[global].b=n;
		global++;
		return n;
	}
	else
	{
		c[global].a=n;
		c[global].b=(f(n/2)+f(n/3)+f(n/4));
		global++;
		return (f(n/2)+f(n/3)+f(n/4));
	}
}

 long int g( long int n)
{
	if(n<=1000)
	{
		return a[n];
	}
	else
	{
		return f(n);
	}

}


int main()
{

	int i;
	long long int n;
	

	for(i=0;i<1000;i++)
	{
		c[i].a=-1;
	}
	//scanf("%lld",&n);
while(scanf("%ld",&n)!=EOF)
{

	printf("%ld\n",f(n));
}	
	return 0;
}


