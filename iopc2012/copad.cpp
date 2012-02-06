#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define MAXN 1010
vector<int> topgrid[MAXN];
int grid[MAXN+2][MAXN+2];
int count[MAXN+2];
vector<int> order;
int n,m,t1,t2,i,j,k,T;
int length[MAXN+2];
void init(){
	int i, j;
	for(i=0;i<n;i++){
		count[i]=0;
		length[i]=0;
		for(j=0;j<=i;j++)
			grid[i][j]=grid[j][i]=0;
		topgrid[i].clear();
	}
	order.clear();
}
void topo(){
	int i, j, k;
	bool take;
	queue<int> q;
	for(i=0;i<n;i++){
		if(count[i]==0)q.push(i);
	}
	while(!q.empty()){
		int t;
		t = q.front();
		order.push_back(t);
		q.pop();
		for(i=0;i<n;i++){
			if(grid[t][i]==1){
				count[i]--;
				if(count[i]==0)
	q.push(i);
			}
		}
	}

}
int find(){
	int max =0, i, k,j;
	for(i=0;i<order.size();i++){
		for(j =0;j<topgrid[order[i]].size();j++){
			if(length[(topgrid[order[i]])[j]]<length[order[i]]+1)
				length[(topgrid[order[i]])[j]]=length[order[i]]+1;
		}
	}
	for(i=0;i<n;i++){
		if(length[i]>max)max = length[i];

	}

return max;
}
int main(){
	int T,res, i;
	scanf("%d",&T);
	while(T--){
		init();
		scanf("%d %d",&n,&m);
		for(i=0;i<m;i++){
			scanf("%d %d",&t1,&t2);
			topgrid[t1].push_back(t2);
			grid[t1][t2] = 1;
			count[t2]++;

		}
		if(m==0){ printf("1\n"); continue;}
		topo();
		res = find();
		printf("%d\n",res+1);
	}
return 0;
}
