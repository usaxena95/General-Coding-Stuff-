#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	char a[101];
/*	char a;
	scanf("%c",&a);
	int i= a ;
	printf("%d",i-48);
*/
	//TAKING THE FIRST INPUT
	int i;
	for(i=0;i<101;i++)
	{
		a[i]='*';
	}
	scanf("%s",a);
	i=0;
	while(a[i]!='*')
	{
		i++;
	}
	//printf("%d",i-1);
	int j;
	char b[i-1];
	for(j=0;j<=i-2;j++)
	{
		b[j]=a[j];
		printf("%c",b[j]);
	}
	printf("\n");
	//TAKING THE SECOND INPUT
	for(i=0;i<101;i++)
	{
		a[i]='*';
	}
	scanf("%s",a);
	i=0;
	while(a[i]!='*')
	{
		i++;
	}
	int k;
	char c[k-1];
	for(k=0;k<=i-2;k++)
	{
		c[k]=a[k];
		printf("%c",c[k]);
	}
	//SUBTRACTING FIRST FROM OTHER
	

	return 0;
}

