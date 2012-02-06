#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,i;
	
	//scanf("%d",&n);
	while(1)
	{
		scanf("%d",&n);
		if(n==-1)
		{
			break;
		}
		else
		{
		float avg;
		int av;
		float sum=0;
		int h,l,m,moves=0;
		int a[n];
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				sum+=a[i];
			}
			avg=sum/n;
//			printf("%f\n",avg);
			av=sum/n;
//			printf("%d\n",av);
			if(av==avg)
			{
//				printf("Enter");
				sort(a,a+n);
				h=n-1;
				l=0;
				m=l + (h-l)/2;
				while(h >= l)
				{
					m=l + (h-l)/2;
					//printf("%d %d %d\n",l,m,h);
					if(av > a[m])
					{
						l=m+1;
					}
					else if(av < a[m])
					{
						h=m-1;
					}
					else
					{
						break;
					}
				}
				for(i=(m);i<n;i++)
				{	
					moves+=(a[i] - av);
				}
				printf("%d\n",moves);
			
			}
			else
			{
//				printf("Enter1");
				printf("-1\n");
			}	
				
		}
			

	}
	return 0;
}
