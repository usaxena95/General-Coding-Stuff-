#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int a[10001];
int b[10001];
int main()
{
	int nor;
	scanf("%d",&nor);
	int i;
	for(i=0;i<nor;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		a[i]=a[i]-b[i];
		if(a[i]<0)
		{
			b[i]=2;
			a[i]=-a[i];
		}
		else
		{
			b[i]=1;
		}
	}
	int lead1=0,maxlead1=0,minlead1=0;
	for(i=0;i<nor;i++)
	{
		if(b[i]==1)
		{
			lead1=lead1+a[i];
		}
		else
		{
			lead1=lead1-a[i];
		}
		if(maxlead1<lead1)
		{
			maxlead1=lead1;
		}
		if(minlead1>lead1)
		{
			minlead1=lead1;
		}
		
	}
	if(maxlead1>(-minlead1))
	{
		printf("%d %d",1,maxlead1);
	}
	else
	{
		printf("%d %d",2,-(minlead1));
	}

	
	
		
/*	int maxsum1=0,maxsum2=0;
	i=0;
	flag:
		int sum1=0;
		while(b[i]==1  )
		{
			//int sum1=0;
			sum1=sum1+a[i];
			if(sum1>maxsum1)
			{
				maxsum1=sum1;
			}
			i++;
		}
		int sum2=0;
		while(b[i]==2 )
		{
			//int sum2=0;
			sum2=sum2+a[i];
			if(sum2>maxsum2)
			{
				maxsum2=sum2;
			}
			i++;
		}
		if(i<nor)
		{		
		goto flag;
		}
		if(maxsum2>maxsum1)
		{
			printf("%d %d",2,maxsum2);
		}
		else
		{
			printf("%d %d",1,maxsum1);
		}
*/
	return 0;
}
