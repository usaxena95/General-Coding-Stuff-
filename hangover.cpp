#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct array array;
struct array
{
	int a;
	float b;
};

int main()
{
	float a;
	while(1)
	{
		scanf("%f",&a);
		if(a==0)
		{
			break;
		}
		float sum=0;
		int i=2;
		while(sum<a)
		{
			sum=sum+1/float(i);
			i++;
		}
		printf("%d card(s)\n",i-2);
		
	}
	return 0;
}

