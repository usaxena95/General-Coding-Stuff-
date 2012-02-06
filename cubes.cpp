#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	//int j,k,l;
	/*
	for(i=5;i<100;i++)
	{
		hell:
		for(j=2;j<=i-2;j++)
		{
			for(k=3;k<=i-1;k++)
			{
				for(l=4;l<=i;l++)
				{
					if(a[i]==(pow(j,3)+pow(k,3)+pow(l,3)))
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a[i],j,k,l);
						i++;
						goto hell;
					}
				}
			}
		}
	}*/
	double x,j,k,l;
	for(j=3;j<=97;j++)
	{
		for(k=j+1;k<=98;k++)
		{
			for(l=k+1;l<=99;l++)
			{
				x= cbrt(pow(j,3)+pow(k,3)+pow(l,3));
				if(fmod(x,1)==0)
				{
				printf("%lf \n",x);

					//printf("Cube = %.0lf Triple = (%.0lf,%.0lf,%.0lf)\n",x,j,k,l);
				}
			}
		}
	}



	return 0;
}
