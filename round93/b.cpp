#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int string0(int *,int);
int main()
{
	int count=0;
	int a[100];
	int i;
	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
//	printf("%d",string0(a,100));
	int n;
	scanf("%d",&n);
	int b[n];
	/*
	b[0]=2;
	b[1]=4;
	b[2]=3;
	b[3]=2;
	b[4]=3;
	*/
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		a[b[i]-1]++;
	}
	int counter=0;
	
	while(!string0(a,100))
	{
	for(i=0;i<100;i++)
	{
		if(a[i]<=1)
		{
			a[i]=0;
		}
		else if(a[i]>=2 && a[i]<4)
		{
			counter++;
			a[i]=a[i]-2;
		}
		else
		{
			count++;
			a[i]=a[i]-4;
		}
	}
	}

	count=count+counter/2;
	printf("%d",count);
	return 0;
}

int string0(int * arr,int len)
{
	int counte=0;
	int * ptr=arr;
	for(ptr=arr;ptr<arr+len;ptr++)
	{
		if(*ptr==0)
		{
			counte++;
		}
	}
	//printf("%d\n",counte);
	if(counte==len)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


