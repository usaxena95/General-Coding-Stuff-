#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int a[20][20];

int b2d(int n)
{
//	printf("%d\n",n);
    int output = 0;
    int rem=n%10;
	int itr=0;
	while((n)!=0)
	{
		output+=pow(2,itr)*rem;
//		printf("%d",output);
		itr++;
		n/=10;
		rem=n%10;
	}
	return output;
}

int one(int  a[][20],int b,int c)
{
	int i,j,count;
	for(i=0;i<c;i++)
	{
		count = 0;
		for(j=0;j<b;j++)
		{
			if(a[j][i]==1)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			return 0;
		}
	}
	return 1;
}

int two(int a[][20],int b,int c)
{
	int i,j,count;
	for(i=0;i<b;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]==0)
			{
				count++;
			}
		}
		if(count==c)
		{
			return 0;
		}
	}
		
	return 1;
}

int three(int a[][20],int b,int c)
{
	int i,j,count;
	for(i=0;i<b;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]==1)
			{
				count++;
			}
		}
//		printf("%d\n",count);
		if(count==c)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int ans1,ans2,ans3;
	int t,i,j,n,p,l;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
	scanf("%d %d",&n,&p);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			a[i][j]=0;	
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	ans1=one(a,n,p);
	ans2=two(a,n,p);
	ans3=three(a,n,p);
//	printf("%d %d %d %d",ans1,ans2,ans3);

	printf("Case %d: %d\n",l+1,b2d(ans1*100+ans2*10+ans3));
	}
	return 0;
}
