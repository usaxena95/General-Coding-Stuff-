#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,k,m;
	scanf("%d %d %d",&n,&k,&m);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[k+1];
	b[0]=0;
	for(i=1;i<k+1;i++)
	{
		scanf("%d",&b[i]);
	}
	
	return 0;
}
