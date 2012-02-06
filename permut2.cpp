#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
 flag:
	  int n;
	scanf("%lld",&n);
if(n==0)
{
	return 0;
}
else
{
	long long   int a[n+1];
	long long   int b[n+1];
	b[0]=a[0]=0;
	  long long int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		b[a[i]]=i;
	}
	
//	for(i=1;i<=n;i++)
//	{
//		printf("%lld\n",b[i]);
//	}


	long long   int count=0;
	for(i=0;i<=n;i++)
	{
		if(a[i]==b[i])
		{
			count++;
		}
	}
	if(count==n+1)
	{
		printf("ambiguous\n");
	}
	else
	{
		printf("non ambiguous\n");
	}
goto flag;	
}
	
}	
