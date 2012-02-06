#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

/*int main()
{
	int test;
	scanf("%d",&test);
	//cout<<test;
	int a[test];
	int i;
	for(i=0;i<test;i++)
	{
		scanf("%d",&a[i]);	
	}	
	int j;
	for(i=0;i<test-1;i++)
	{
		for(j=i+1;j<test;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<test;i++)
	{
		printf("%d\n",a[i]);
	}
}	
*/

//int median(int *);
int * pivot(int *);
void quickSort(int *,int *,int *);
int main()
{
	 int test;
        scanf("%d",&test);
        //cout<<test;
        int a[test];
        int i;
        for(i=0;i<test;i++)
        {
                scanf("%d",&a[i]);
        }
	int * left=pivot(a)+1;
        int * right=pivot(a)+test-1;
	quickSort(a,left,right);
	
	for(i=0;i<test;i++)
	{
		printf("%d\n",a[i]);
	}
	
}

void quickSort(int * array,int * left,int * right)
{
	//int * left=pivot(a)+1;
	//int * right=pivot(a)+size-1;
	//int size=right-left+1;
	if(right-left>=1)
	{
	int *initial=right;
	foo:
	while((*left)<(*(pivot(array))))
	{
		left++;
	}
	while((*right)>=(*(pivot(array))))
	{
		right--;
	}
	if((left)<((right)))
	{
		int temp=*left;
		*left=*right;
		*right=temp;
		goto foo;
	}
	else
	{
		int temp=(*(pivot(array)));
		(*(pivot(array)))=*right;
		*right=temp;
		//quickSort(array,pivot(array),right-1);
		//quickSort(array,left,initial);
		return;
		//int i;
		//for(i=0;i<size;i++)
		//{
		//	printf("%d\n",a[i]);
		//}
		//int *b=pivot(a);
		//int *c=left;
		//quickSort(b,right-pivot(a));
		//quickSort(c,pivot(a)+size-left);
		
	}
	}
	else
	{
		return;
	}
		

}

int * pivot(int * array)
{
	int *ptr;
	ptr=array;
	return ptr;
}
