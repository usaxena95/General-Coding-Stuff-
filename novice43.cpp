#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>


using namespace std;


int main()
{
	int t;
	scanf("%d",&t);
	char a[t],b[t];
	int i,j;
	for(i=0;i<t;i++)
	{
		b[i]='0';
		a[i]=97+i;
	//	printf("%c",a[i]);
	}
	for(i=0;i<t;i++)
	{
		b[i]=a[i];
		//will remove '0' and check for conditions
		bool checkb= checkifvalid(b);
		if(checkb==1)
		{

}
