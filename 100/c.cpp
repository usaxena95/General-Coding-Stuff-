#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	long long int r[n];
	int save[3];
	int count=0,ans=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&r[i]);
	}
	sort(r,r+n);
	for(i=0;i<n;i++)
	{
		if(count==0)
		{
			save[count]=r[i];
			count++;
		}
		else
		{
			if(r[i]!=save[count-1]);
			{
				
				save[count]=r[i];
				count++;
			}
			if(count==3)
			{
				count=0;
				ans++;
				printf("%lld %lld %lld\n",save[0],save[1],save[2]);
			}
		}
	}
	printf("%d",ans);



	


	return 0;
}
