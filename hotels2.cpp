#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>


using namespace std;

int main()
{
	int n;
	long long int m;
	scanf("%d %lld",&n,&m);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	long long int val=0,mval=0;
	 int *p1=a,*p2=a+n,*ptr;
	for(ptr=p1;ptr<(p2);ptr++)
	{
		val+=*(ptr);
		if(  val<=m)
		{
//			cout<<val<<endl;
			if(val>mval)
			{
				mval=val;
			}
		}
		else
		{
			while(val>m)
			{
				val-=*(p1);
				p1++;
			}	
//			cout<<val<<endl;
			if(val>mval)
			{

				mval=val;
			}
		}
	}
	printf("%lld",mval);

	return 0;
}
