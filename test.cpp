#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;

int a[100][50];
int main()

{
int i,j;
char c;

for(i=0;i<48;i++)
{
	for(j=0;j<50;j++)
	{
		c=getchar();
		if(c!='\n')
		{
		a[i][j]=atoi(&c);		
		}
		else
		{
			j--;
		}
				
		
	}
	

}
for(i=48;i<57;i++)
{
	 for(j=0;j<50;j++)
        {
                c=getchar();
                if(c!='\n')
                {
                a[i][j]=atoi(&c);
                }
                else
                {
                        j--;
                }


        }
}
for(i=57;i<100;i++)
{
         for(j=0;j<50;j++)
        {
                c=getchar();
                if(c!='\n')
                {
                a[i][j]=atoi(&c);
                }
                else
                {
                        j--;
                }


        }
}

printf("\n\n\n\n");
for(i=0;i<100;i++)
{
	for(j=0;j<50;j++)
	{
		if(i>=48 && i<=57)
		printf("%d",a[i][j]);

	}
	printf("\n");
}
}
