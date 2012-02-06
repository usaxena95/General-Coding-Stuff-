#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	long long int m;
	scanf("%d %lld",&t,&m);
	long long int a[t],j,k,mval[t];
	long long int val=0,mval=0;
	long long int * ptr=a,*i;
	for(i=ptr;i<ptr+a;ptr++)
	{
		val+=(*i);
		if(val<=m && val>mval)
		{
			mval=val;
		}
		else if(val>m)
		{
			val=0;



	}
	
//	printf("%d",mval[4]);
	
}

