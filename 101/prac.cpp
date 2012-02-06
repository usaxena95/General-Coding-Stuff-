#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cstring>
using namespace std;

typedef struct prob prob;
struct prob
{
	char a;
	int n;
	int x;
};
void swap1(char (&x)[10], char (&y)[10])
{
    char temp[10];

    memcpy(temp, x, 10);
    memcpy(x, y, 10);
    memcpy(y, temp, 10);
}
void swap2( char * a,char *b)
{
	char * temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}

void swap( int * a,int *b)
{
	int * temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
int main()
{
	int n=4;
//	scanf("%d",&n);
	prob p[n];
	int a[n];
	int i;
	/*
	for(i=0;i<n;i++)
	{
		cin>>p[i].arr;
		cin>>p[i].n;
		p[i].x=150+10*i;
//		cout<<p[i].arr<<endl<<p[i].n;
	}*/	
	p[0].a='a';
	p[1].a='b';
	p[2].a='c';
	p[3].a='d';
	p[0].n=0;
	p[1].n=2;
	p[2].n=0;
	p[3].n=0;	
	int j;
	for(i=0;i<n;i++)
	{
		if(p[i].n>0)
		{
			for(j=i;j<i+p[i].n;j++)
			{
				swap(&(p[j].x),&(p[j+1].x));
				swap(&(p[j].n),&(p[j+1].n));
				swap2(&(p[j].a),&(p[j+1].a));
			}
			p[j+1].n=0;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<p[i].a << p[i].x <<endl;
	}


	return 0;
}
	
