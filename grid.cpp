#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
long long int fact(int);
void truncate0(int * );
int main()
{
	//long long int t= fact(20);
	int a[30],b[30];
	int i;
	a[0]=1;
	for(i=1;i<30;i++)
	{
		a[i]=0;
	}
	int j,t=0,u;
	for(j=2;j<=20;j++)
	{
		for(i=0;i<30;i++)
		{
			//t=(j*a[i])/10;
			u=(j*a[i]+t)%10;
			t=(j*a[i]+t)/10;
			a[i]=u;
		}
	}
	
	for(i=0;i<30;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=0;i<30;i++)
	{
		b[29-i]=a[i];
	}
	truncate0(b);	
	long long int te=fact(10);
	printf("\n%d",te);
	return 0;
}
long long int fact(int t)
{
	if(t==0)
	{
		return 1;
	}
	else
	{
		return t*fact(t-1);
	}
}

void truncate0(int *b)
{
            int *ptr;
            ptr=b;
            int count=0;
            while(*ptr==0)
            {
                ptr++;
                count++;
            }
            int c[30-count];
            int j;
            for(j=0;j<(30-count);j++)
            {
                c[j]=*ptr;
                ptr++;
                printf("%d",c[j]);
            }
}

