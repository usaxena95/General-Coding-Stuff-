#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

typedef struct com com;
struct com
{
	char a[100];
	int  b; 
} ;

int main()
{
	int t;
	int l=1;
	scanf("%d",&t);
	int i, max=0;
	com c[10];
	while(t)
	{
		printf("\nHello  i\n");
		for(i=0;i<10;i++)
		{
			printf("Hello1 i\n");
			scanf("%s",c[i].a);
			printf("Hello2 \n");
			scanf("%d ",&c[i].b);
			if((c[i].b) > max)
			{
				max=c[i].b;
				printf("%d\n",max);
			}
		}
		printf(" Case #%d: ",l);
		for(i=0;i<10;i++)
		{
			if(c[i].b==max)
			{
				printf("\n %s ",c[i].a);
				printf("%d ",c[i].b);
			}
		}
		t--;
		l++;
		//printf("Hello");
	}
	return 0;
}
