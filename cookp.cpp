#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{	
		int n,a,d;
		scanf("%d %d %d",&n,&a,&d);
		float j;
		j=n*(n-1)/2;
		int k=n*a+d*j;
		printf("%d\n",k);		
		t--;
	}
	return 0;
}
