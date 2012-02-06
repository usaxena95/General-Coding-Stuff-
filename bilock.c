#include<stdio.h>
#include<stdlib.h>

int main()
{
	char  a[4],b[4];
	int l=0;
	for(l=0;l<=3;l++)
	{
		scanf("%c",&a[l]);
	}
	for(l=0;l<=3;l++)
	{
		scanf("%c",&b[l]);
	}
	int i=atoi(a);
	int j=atoi(b);
	if(i%2==0 || j%2!=0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
		//cout<<"no";
	}
	return 0;
}

