#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int IsPrime(long long int);
int main()
{
	long long int k;
	long long int input=600851475143;


	for(k=3;k<=input;k=k+2)
	{
		if(input%k==0 )
		{
			if(IsPrime(k))
			{
				printf("%lld\n",k);
				//break;
			}
		}
	
	}
}
int IsPrime(long long int number)
{
	long long int i,j,counter=0;
	j=sqrt(number);
	//printf("%lld",j);
	for(i=2;i<=j;i++)
	{
		if((number)%i==0)
		{
			counter++;
		}
	}
	if(counter==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
		
