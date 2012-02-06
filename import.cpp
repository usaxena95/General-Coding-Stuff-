#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

typedef struct cons cons;
struct cons
{
	char name;
	double rel ;
	string path;
};

int main()
{
	int t;
	scanf("%d",&t);
	cons c1[t];
	int i;
	double min[t];
	for(i=0;i<t;i++)
	{
		cin >> c1[i].name>>c1[i].rel>>c1[i].path;	
		size_t pos1 = c1[i].path.find("*");
		if( pos1!=string::npos)
		{
			min[i]=c1[i].rel;
		}		
		else
		{
			



	}
	return 0;
}
