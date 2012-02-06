#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i;
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	
/*	
	a[0]=0;
	a[1]=10;
	b[0]=0;
	b[1]=0;
*/	
	double tot=0;
	int l,m,o,p;
	for(i=0;i<n-1;i++)
	{
		l=pow((a[i+1]-a[i]),2);
		m=pow((b[i+1]-b[i]),2);
		o=l+m;
		tot+=sqrt(o);
	}
	tot=tot/50;
	printf("%.9f",k*tot);
	return 0;

}

