#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int i;
void setone(int *a,int n);
void settwo(int *a,int n);
int max(int a,int b);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
		c[i]=a[i];
	}

	setone(b,n);
	printf("\n");
	settwo(c,n);
//	settwo(c,n);
/*	int op=0;
	scanf("%d",&op);
	char c;
	int d,b;
	while(op)
	{
		cin>>c >>d >>b;
		op--;		
		//printf("%c %d %d\n ",c,a,b);
		if(c=='U')
		{
			//code
			a[d]=b;
			//transform(int *a)
			
		}
		else if (c=='Q')
		{
			//code

		}
		else
		{
			printf("Not Reached");
		}

	}*/
	return 0;
}

void setone(int *a,int n)
{
	int *ptr;
	int itr=0;
	ptr=a;
	*ptr=*a;
	printf("%d ",*ptr);
	for(ptr=a+1;ptr<(a+n);ptr++)
	{
		*ptr=max(*(a+itr),*ptr);
		itr++;
		printf("%d ",*ptr);
	}
}
void settwo(int *a,int n)
{
	int *ptr;
	int itr=n-1;
	ptr=a+n-1;
	*ptr=*(a+n-1);
	printf("%d ",*ptr);
	for(ptr=a+n-2;ptr>=a;ptr--)
	{
		*ptr=max(*(a+itr),*ptr);
		itr--;
		printf("%d ",*ptr);
	}
}

	
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
