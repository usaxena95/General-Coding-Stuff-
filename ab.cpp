//#include<iostream>
#include<stdlib.h>
#include<stdio.h>

//using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		//scanf("%d",&t);
		int i;
		for(i=0;i<t;i++)
		{
			long long int n;
			scanf("%lld",&n);
			if(n%2==0)
			{
				printf("ALICE\n");
			}
			else
			{
				printf("BOB\n");
			}
		t--;
		}
//	return 0;
	}
	return 0;
}

