#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
	clock_t t1,t2;
	t1=clock();
	int t;
	scanf("%d",&t);
	while (i)
	{
		int noa,i;
		scanf("%d",&noa);
		int a[noa],b[noa];
		//int a[7]={1,2,5,7,6};
		//int b[7]={4,3,8,9,10};
		for(i=0;i<noa;i++)
		{
			//a[i]=i+1;
			scanf("%d",&a[i]);
		}
		for(i=0;i<noa;i++)
		{
			//b[i]=i+4;
			scanf("%d",&b[i]);
		}

		float time;

		int max=0;
		for(time=1.5;time<=999.5;time++)
		{
			int count=0;
			for(i=0;i<noa;i++)
			{
				if(a[i]<time && b[i]>time)
				{
					count++;
				}
			}
			if(max<count)
			{
				max=count;
			}
		}
		printf("%d\n",max);


		t--;
	}
	t2=clock();
	float diff=float(t1)-float(t2);
	float seconds=diff/CLOCKS_PER_SEC;
	printf("%f",&seconds);
	return 0;
}
