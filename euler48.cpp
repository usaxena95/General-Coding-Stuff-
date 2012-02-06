#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	//
	int a[1000][10],b[10];
	int i,j;
	//
	for(i=0;i<1000;i++)
	{
		a[i][0]=1;
		for(j=1;j<10;j++)
		{
			a[i][j]=0;
		}
	}
	int k,t,itr,u;
	//
	for(i=1;i<1000;i++)
	{
		//t=0;
		k=i+1;
		for(itr=0;itr<k;itr++)
		{
			t=0;
			for(j=0;j<10;j++)
			{
				u= (k *a[i][j] +t)%10;
				t=(k *a[i][j] +t)/10;
	/*			if(j==0)
				{
					printf("%d ",t);
				}*/
				a[i][j]=u;
			}
		}
		for(j=0;j<10;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	for(itr=0;itr<10;itr++)
	{
		b[itr]=0;
	}
	t=0;
	for(itr=0;itr<10;itr++)
	{
		//
		for(i=0;i<1000;i++)
		{
			b[itr]+=a[i][itr];
		}
			u=b[itr]+t;
			t=u/10;
			b[itr]=u%10;
			printf("%d ",b[itr]);
	}
	return 0;
}

