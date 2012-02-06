#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int i,j,a[n];
	int v,l,h,m,count;
	while(1)
	{
		count=0;
//		n=4;
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		else
		{
			
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);	
			}
//			a[0]=2;
//			a[2]=9;
//			a[1]=2;
//			a[3]=6;
			sort(a,a+n);
			for(i=0;i<n-2;i++)
			{
				for(j=i+1;j<n-1;j++)
				{
					 v=a[i]+a[j];
					 l =j+1;
					 h=n-1;
					 m=l + (h-l)/2;
					 
					 while(h >  l)
					 {
						 m= l + (h-l)/2;
						 if(a[m] >  v)
						 {
							 h=m-1;
						 }
						 else if(a[m] < v  )
						 {
							 l=m+1;
							 if(l ==n)
							 {
								 m++;
							 }
						 }
						 else
						 {
							 break;
						 }
					 }
					 if(h==l)
					 {
						 m=h;
					 }
					count+=n-m;
					if(a[m]==v)
					{
						count--;
					}
					if(h==n-1 && m==n-1 && l==n-1 && a[i] + a[j] >a[m])
					{
						count--;
					}
		//			printf("%d",count);
				}
			}
			printf("%d\n",count);
		}	
	}
	return 0;
}
