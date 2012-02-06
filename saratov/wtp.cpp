#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int foo;
int  max(int* ,int );
int min(int *,int);
int main()
{
	int n;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m,count[n],piglet=0;
	for(i=0;i<n;i++)
	{
		count[i]=0;
	}
//	while(n)
//	{
	
	int l=min(a,n);
	while(a[min(a,n)])
	{

		m= max( a, n);
	//	printf("%d\n",a[m]);
		if(count[m]<3 && a[m]>=k)
		{
			a[m]=a[m]-k;
			count[m]++;
		}
		else
		{
			piglet=a[m]+piglet;
			//printf("%d",piglet);
			a[m]=0;
		}
	}
	printf("%d\n",m);
	a[m]=300;
//	n--;
//}
	printf("%d",piglet);
	return 0;
}

int  max(int * a,int n)
{
	int i;
	int max=0,k;
	for(i=0;i<n;i++)
	{
		if((*(a+i))>max && *(a+i)<=100)
		{
			k=i;
			max=*(a+i);
		}
	}
	return k;
}
int  min(int * a,int n)
{
	//if(foo=0)
	//{
	int i;
	int min=101,k;
	for(i=0;i<n;i++)
	{
		if((*(a+i))<min && *(a+i)<=100)
		{
			k=i;
			min=*(a+i);
		}
	}
	//}
	return k;
}

