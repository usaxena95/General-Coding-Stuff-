#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int itr;
	scanf("%d",&itr);
//hell:
	while(itr--)
	{
	double n;
	scanf("%lf",&n);
	int no = int(n);
	int i,count=0,array[no];
	for(i=0;i<no;i++)
	{
		array[i]=0;
	}
	for(i=0;i<no;i++)
	{
		int t;
		scanf("%d",&t);
/*		if(t==0)
		{
			printf("1\n");
			goto hell;
		}*/
		int a[t],j;
		for(j=0;j<t;j++)
		{
			scanf("%d",&a[j]);
			array[a[j]-1]++;
		}
	}
	for(i=0;i<no;i++)
	{
		if(array[i] >= log(n))
		{
			count++;
		}
	}
	printf("%d\n",count);
	}
	
	return 0;
}
