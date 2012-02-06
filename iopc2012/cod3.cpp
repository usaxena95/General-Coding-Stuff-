#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define N 1015

queue<int> mylist1;
vector<int> vec[N+2];
vector<int> mylist2;
int a[N+2][N+2];
int ans[N+2];
int v[N+2];
int i,n,j,k,i1,i2,t,s;
int main()
{

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&s);
		if(s==0)
		{
			printf("1\n");
			continue;
		}
		for(j=0;j<n;j++)
		{
			v[j]=0;
			ans[j]=0;	
			for(k=0;k<n;k++)
			{
				a[j][k]=0;
			}
			vec[i].clear();
		}
		mylist2.clear();
		for(j=0;j<s;j++)
		{
			scanf("%d %d",&i1,&i2);
			a[i1][i2]=1;
			vec[i1].push_back(i2);
			v[i2]++;
		}
		for(j=0;j<n;j++)
		{
			if(v[j]==0)
			{
				mylist1.push(j);
			}
		}
		while(!mylist1.empty())
		{
			int t=mylist1.front();
			mylist2.push_back(t);
			mylist1.pop();
			for(j=0;j<n;j++)
			{
				if(a[t][j]==1)
				{
					v[j]--;
					if(v[j]==0)
					{
						mylist1.push(j);
					}
				}
			}
		}
		for(k=0;k<mylist2.size();k++)
		{
			for(j=0;j<vec[mylist2[k]].size();j++)
			{
				if(ans[(vec[mylist2[k]])[j]]< ans[mylist2[k]]+1)
				{
					ans[(vec[mylist2[k]])[j]]= ans[mylist2[k]]+1;
				}
			}
		}
		int max=0;
		for(j=0;j<n;j++)
		{
			if(ans[j]>max)
			{
				max=ans[j];
			}
		}
		printf("%d\n", max+1);
	}
	return 0;
}


