#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	
	long long int a=5;
	int n=1,k=3;
//	scanf("%lld %d %d",&a,&n,&k);
	int b[k];
	int i;
	for(i=0;i<k;i++)
	{
		b[i]=0;	
	}
	if(n==0)
	{
		for(i=0;i<k;i++)
		{
			printf("0 ");
		}
		return 0;	
	}
				
	foo:
	while (a)
	{
		for(i=0;i<k;i++)
		{
			flag:
			if(b[i]<n)
			{
				b[i]+=1;
				a--;	
				if(a==0)
				{
					goto foo;
				}
				else
				{
				goto flag;
				}
			
			}
			else
			{
				if(i<k-1)
				{
					int j;
					//b[i]=0;
					for(j=i+1;j<k;j++)
					{
						if((b[j]+1)<n)
						{
							b[j]=b[j]+1;
							int l;
							for(l=0;l<=j-1;l++)
							{
								b[l]=0;
							}
							break;
						}
					}
					
				}
				else
				{
					b[i]=0;
				}
				a--;
				goto foo;
			}
		}
		
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}
	
	
	
	return 0;
}
	
		
