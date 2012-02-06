#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int i,arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+a);
	int j=b*c,sum=0;
	for(i=0;i<a;i++)
	{
		sum+=arr[a-1-i];
		if(j-sum<=0)
		{
			c = i+ 1; 
			break;
		}
	}
	printf("%d",c);


	return 0;
}
