#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define N 1015
vector<int> grid[N];
int a[N][N],v[N],ans[N];
vector<int> mylist2;
int n,m,i,j,k,s,i1,i2,f,t;
queue <int> mylist1;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
	for(i=0;i<n;i++)
	{
		v[i]=0;
		ans[i]=0;
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
		grid[i].clear();
	}
	mylist2.clear();
	scanf("%d %d",&n,&s);
	for(j=0;j<s;j++)
	{
		scanf("%d %d",&i1,&i2);
		grid[i1].push_back(i2);
		a[i1][i2] = 1;
		v[i2]++;
	}
	if(s==0)
	{ 
		printf("1\n"); 
		continue;
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
		f = mylist1.front();
		mylist2.push_back(f);
		mylist1.pop();
		for(j=0;j<n;j++)
		{
			if(a[f][j]==1)
			{
				v[j]--;
				if(v[j]==0)
				{
					mylist1.push(j);
				}
			}
		}
	}
	int max =0;
	for(i=0;i<mylist2.size();i++)
	{
		for(j =0;j<grid[mylist2[i]].size();j++)
		{
			if(  ans[(grid[mylist2[i]])[j]]<ans[mylist2[i]]+1)
			{
				ans[(grid[mylist2[i]])[j]]=ans[mylist2[i]]+1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(ans[i]>max)
		{
			max = ans[i];
		}
	}

	printf("%d\n",max+1);
	}
return 0;
}

