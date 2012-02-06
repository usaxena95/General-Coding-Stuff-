#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<cstring>


using namespace std;
typedef struct cons cons;
struct cons
{
	int a;
	int b;
};	
string n;
cons c[30];
int a[30];
int i,j,t;
char b[30];
int dist[30],k,count;

int change(int p,int q)
{
	if(p>q)
	{
		return (p-q);
	}
	else
	{
		return (p-q)+20;
	}
}
int func(int p,int q)
{
	if(p-q>=0)
	{
		return (p-q);
	}
	else
	{
		return (p-q+20);
	}
}

int func1(int p,int q,int r)
{
	if(p+q-r>=0)
	{
		return (p+q+r);
	}
	else
	{
		return (p+q+r+20);
	}
}

void set(char * b , int dist)
{
	int i;
	for(i=0;i<20;i++)
	{
		if(b[i]=='W')
		{
			b[i]='0';
			b[func1(i,dist,-1)%20]='X';
		}
	}
	for(i=0;i<20;i++)
	{
		if(b[i]=='X')
		{
			b[i]='W';
		}
	}
}

int func2(int p)
{
	int i;
	for(i=0;i<=k;i++)
	{
		p-=dist[i];
		if(p<0)
		{
			p+=20;
		}
	}
	return p;
}

int main()
{
int test;
scanf("%d",&test);
while(test--)
{
	for(i=0;i<30;i++)
	{
		c[i].a=0;
		c[i].b=0;
		a[i]=0;
		b[i]='0';
		dist[i]=0;
	}
	t=0;
	getline(cin,n);
	int m = atoi(n.c_str());
	while((m)!=99)
	{
		b[m-1]='W';		
		a[t]=m;
		t++;
		getline(cin,n);
		m = atoi(n.c_str());
	}
	k=0;
	while(getline(cin,n))	
	{
		if(n=="")
		{
			break;
		}
		m = atoi(n.c_str());
		dist[k]=0;
		for(i=0;i<20;i++)
		{
			j=change(m,i)%21;
			dist[k]++;
			if(b[j-1]=='W')
			{
				break;
			}
		}
		b[func(m,dist[k])]='0';
		c[k].a=m;
		c[k].b= func2(m)+1+k;
		set(b,dist[k]);
		k++;
	}
	for(i=0;i<30;i++)
	{
		if(a[i]!=0)
		{
			count=0;
			for(k=0;k<20;k++)
			{
				if(c[k].b==a[i])
				{
					printf("Original position %d parked in %d\n",c[k].b,c[k].a);
					count++;
				}
			}
			if(count==0)
			{
				printf("Original position %d did not park\n",a[i]);
			}
		}
	}
printf("\n");	
}
	return 0;
}
		
		


