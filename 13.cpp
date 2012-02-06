#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

//int array[50][50];
int a[60];
int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		a[i]=0;
		//printf("%d",a[i]);
	}
	char c;
	for(i=10;i<59;i++)
	{
		c=getchar();
		
		a[i]=atoi(&c);
		//printf("%d",a[j][i]);
	}
	for(i=0;i<60;i++)
	{
		printf("%d",a[i]);
	}
}


		
	
		

