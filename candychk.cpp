#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,i,a[10];
	float avg;
	int av;
	float sum=0;
	int h,l,m,moves=0;
	//scanf("%d",&n);
		//scanf("%d",&n);
			n=10;
		
		
		/*	for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				sum+=a[i];
			}*/
			a[0]=140;
			a[1]=190;
			a[2]=340;
			a[3]=240;
			a[4]=670;
			a[5]=770;
			a[6]=20;
			a[7]=990;
			a[8]=100;
			a[9]=1000;
			sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9];
			avg=sum/n;
			printf("%f\n",avg);
			av=sum/n;
			printf("%d\n",av);
			if(av==avg)
			{
				printf("Enter");
				sort(a,a+n);
				h=n-1;
				l=0;
				m=l + (h-l)/2;
				while(h>l)
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
				printf("%d",moves);
			
			}
			else
			{
				printf("Enter1");
				printf("-1\n");
			}	
				
		
			

	
	return 0;
}
