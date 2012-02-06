#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;
typedef struct cons cons;
struct cons
{
	int key;
	cons* next;
};

int main()
{
	int t;
	scanf("%d",&t);
	int i;
	int n,s;
	int j,k;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&s);
		int a[n][n];

		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				a[j][k]=0;
			}
		}
		int i1,i2;
		int v[n];
		for(j=0;j<n;j++)
		{
			v[j]=0;
		}

		for(j=0;j<s;j++)
		{
			scanf("%d %d",&i1,&i2);
			a[i1][i2]=1;
			v[i2]++;
		}

		cons * list,*head;
		list = (cons*)malloc(sizeof(cons));
		head=list;
		for(j=0;j<n;j++)
		{
			if(v[j]==0)
			{
				list->key = j;
				list->next = (cons*)malloc(sizeof(cons));
				list=list->next;
			}
		}

		
		cons * list2,*head2;
		head2=list2;
		list2 = (cons*) malloc(sizeof(cons));
		while(head!=NULL)
		{
			list2->key=head->key;
//			cout<<list2->key<<endl;
			
			for(j=0;j<n;j++)
			{
			//	cout<<j<<endl;
				if(a[list2->key][j]==1)
				{
					a[list2->key][j]=0;
					v[j]--;
					if(v[j]==0)
					{
						
						list->key=j;
						list->next=(cons*)malloc(sizeof(cons));
						list=list->next;
						
					}
				}
			}
			head=head->next;
			list2->next=(cons*)malloc(sizeof(cons));
			list2=list2->next;
		}
		list2->next=NULL;
//		cout<<head2->key<<endl;
		/*
		while(head2!=NULL)
		{
			cout<<"2";
			cout<<head2->key<<endl;
			head2=head2->next;
		}		
		*/	
		
	}
	return 0;
}
