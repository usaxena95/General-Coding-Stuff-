#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct mix mix;
struct mix
{
	char a[100];
	int b;
	char c;
};

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		char array[a];

		mix m[a];
		int j;
		for(j=0;j<a;j++)
		{
			array[j]='*';
		}
		for(j=0;j<a;j++)
		{
			scanf("%s",m[j].a);
			scanf("%d",&m[j].b);
			if(array[m[j].b-1]=='*')
			{
				m[j].c='D';
				array[m[j].b-1]='F';
			}
			else
			{
				m[j].c='N';
			}
		}
		
		for(j=0;j<a;j++)
		{
			printf("%c %c",m[j].c,array[j]);
			printf("\n");
			
		}
		

	}
			

	return 0;
}
