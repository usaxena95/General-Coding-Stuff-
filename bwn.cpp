#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

void truncate0(int*);
int main()
{
	int t;
	t=1;
	//scanf("%d",&t);
	while (t)
	{
		unsigned long long int n=1500,m=1500;
		//scanf("%llu %llu",&n,&m);
		int a[n+4][m+4];
		unsigned long long int i,j;
		for(i=0;i<n+4;i++)
		{
			for(j=0;j<m+4;j++)
			{
				if(i==0||i==1||i==n+2||i==n+3)
				{
					a[i][j]=-1;
				}
				else if(j==0||j==1||j==m+2||j==m+3)

				{
					a[i][j]=-1;
				}
				else
				{
					a[i][j]=0;
				}
			}
		}
/*		 for(i=0;i<n+4;i++)
                {
                        for(j=0;j<m+4;j++)
                        {
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
*/		
		unsigned long long int count[9];
		for(i=0;i<9;i++)
		{
			count[i]=0;
		}
		for(i=2;i<n+2;i++)
		{
			for(j=2;j<m+2;j++)
			{
				int temp=0;
				if(a[i-2][j-1]==0)
				{
					temp++;
				}
				 if(a[i-1][j-2]==0)
                                {
                                        temp++;
                                }
				 if(a[i+1][j-2]==0)
                                {
                                        temp++;
                                }
				 if(a[i+2][j-1]==0)
                                {
                                        temp++;
                                }
				 if(a[i+2][j+1]==0)
                                {
                                        temp++;
                                }
				 if(a[i+1][j+2]==0)
                                {
                                        temp++;
                                }
				 if(a[i-1][j+2]==0)
                                {
                                        temp++;
                                }
				 if(a[i-2][j+1]==0)
                                {
                                        temp++;
                                }
				count[temp]++;
			}
		}
/*		unsigned long long int result1=0;
		for(i=0;i<9;i++)
		{
			result1=result1+count[i]*(n*m-(i+1));
		}

		printf("%llu\n",result1);
*/
		int result[200];
		for(i=0;i<200;i++)
		{
			result[i]=0;
		}
		int k;
		for(k=0;k<9;k++)
		{
			unsigned long long int l=count[k]*(n*m-(k+1));
			int carry=0;
			for(i=0;i<200;i++)
			{
			
					if(i==0)
					{
						carry=result[i]+l%10;
                                		result[i]=carry%10;
                                		l=l/10;
					}
					else
					{
						carry=result[i]+l%10+carry/10;
						result[i]=carry%10;	
						l=l/10;
					}
				
			}
			
		}
		int final_result[200];
		for(i=0;i<200;i++)
		{
			final_result[i]=result[199-i];
			//printf("%d",final_result[i]);
			
		}
		printf("\n");
		truncate0(final_result);
					
	t--;
	}
	return 0;
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
            int c[200-count];
            int j;
            for(j=0;j<(200-count);j++)
            {
                c[j]=*ptr;
                ptr++;
                printf("%d",c[j]);
            }
}
          
