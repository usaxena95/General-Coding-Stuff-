#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;
long long int foo[1001];

long long int rec(int a);
//make a global array and then do it
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int i;
		foo[0]=0;
		foo[1]=1;
		foo[2]=1;
		for(i=3;i<=1000;i++)
		{
			foo[i]=0;
		}
		int no;
		scanf("%d",&no);
		long long int ans = rec(no);
		printf("%lld\n",ans);
		t--;
	}
	return 0;
}

long long int rec(int a)
{
	if(foo[a])
	{
		return foo[a];
	}
	else
	{
		int j;
		for(j=1;j<=(a/2);j++)
		{
			if(j==a-j)
			{
				foo[a]=foo[a]+pow(rec(j),2);
			}
			else
			{
				foo[a]=foo[a]+ 2*rec(a-j)*rec(j);
			}
		}
		return foo[a];
		
	}
}
