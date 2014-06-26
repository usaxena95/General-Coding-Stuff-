/*
UTKARSH SAXENA
IIT INDORE
*/#include<iostream>
#include<map>
#include<vector>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<fstream>
using namespace std;
#define abs(x) ((x)>0?(x):-(x))
#define M 1000000007
#define lld signed long long int
#define pp pop_back()
#define ps(x) push_back(x)
#define tkint(n) scanf("%d",&n)
#define tkchar(ch) scanf("%c",&ch)
#define tklong(n) scanf("%I64d",&n)
lld dp[11][1<<11+1];
int f[11][1<<11+1];
lld rec(int n,int mask)
{
    if(mask==((1<<n)-1))return 1;
    if(mask>((1<<n)-1))return 0;
    if(f[n][mask])return dp[n][mask];
    lld ans=0;
    int per,tm;
    for(int x=1;x<=n;++x)
    {
        per=((1<<(x-1))-1);//needs all less than x
        per=per|mask;
        if((per&(1<<(x-1)))>0)per-=1<<(x-1);
        ans+=rec(n-1,per);
    }
    f[n][mask]=1,dp[n][mask]=ans;
    return ans;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lld ans=0;
        cout<<rec(n,0)<<endl;
    }
}

