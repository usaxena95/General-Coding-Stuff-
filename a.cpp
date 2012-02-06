#include<iostream>
#include<stdio.h>
//#include<stdio.h>
#include<stdlib.h>
using namespace std;

//void cnte(int * ,int);
//void cnto(int * ,int);
int main()
{
	int t,n;
	scanf("%d %d"&t,&n);
	int a[t][t];
	int i,c,b,j,k;
	for(k=0;k<t;k++)
	{
		for(j=0;j<t;j++)
		{
			a[k][j]=0;
		}
	}

	for(i=0;i<n;i++)
	{
		scanf("%d %d",&c,&b);
		k=b-1;
		j=c-1;
		a[j][k]=a[k][j]=1;
	}
	int count[k];
	for(k=0;i<t;k++)
	{
		for(j=0;j<t;j++)
		{
			if
		


}	
