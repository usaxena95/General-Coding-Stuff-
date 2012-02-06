#include <iostream>
#include <string>
#include<stdio.h>
#include<algorithm>

using namespace std;


int main () 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,k;
	scanf("%d %d",&n,&k);
	int i;
	int a[k];
//	a[0]=6;
//	a[1]=3;
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
//		printf("%d\n",a[i]);
	}

	sort(a,a+k);
	int array[a[k-1]];
	for(i=0;i<a[k-1];i++)
	{
		array[i]=0;
	}
	for(i=0;i<k;i++)
	{
		array[a[i]-1]=1;
	}
	int count=0,j;
	for(i=a[k-1]-1;i>=0;i--)
	{
		if(array[i]==1)
		{
			count++;
			for(j=1;j<=(i+1);j++)
			{
				if((i+1)%j==0)
				{
					if(array[j-1]==0)
					{
						array[j-1]=1;
					}
					else
					{
						array[j-1]=0;
					}
				}
			}
		}

	}
	printf("%d\n",count);
	}
		
	
	
	
	return 0;
}

