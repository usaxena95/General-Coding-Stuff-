#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int chk(int a , int b , int c)
{
	if(a+b < c || b+c < a || c+a < b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	
int main()
{
while(1)
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		return 0;
	}
	else
	{
	int a[n];	
	int i,j,k,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{	
				if(chk(a[i],a[j],a[k]))
				{
					count++;
				}
			}
		}
	}
	printf("%d",count);
	}

}	//return 0;
}

