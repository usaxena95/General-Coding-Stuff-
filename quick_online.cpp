#if 0
#!/bin/bash
g++ -g -Wall quick_online.cpp -o quick && ./quick
exit
#endif
#include <iostream>
#include<cstdio>
using namespace std;



void PrintArray(int* array, int n);
void QuickSort(int* array, int startIndex, int endIndex);
int SplitArray(int* array, int pivotValue, int startIndex, int endIndex);
void swap(int &a, int &b);

int main(void)
{
	int h;
	scanf("%d",&h);
	int array[h];
	int i;
	
	for( i = 0; i < h; i++)				
	{
		 
		 scanf("%d",&array[i]);
	}
	
	QuickSort(array,0,h - 1);				
	PrintArray(array, h);
	
	
	return 0;
}


void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


void PrintArray(int* array, int n)
{
	int i;
	 
	for( i = 0; i < n; i++) 
	{
		printf("%d\n",array[i]);
	}
}

void QuickSort(int* array, int startIndex, int endIndex)
{
	int pivot = array[startIndex];					
	int splitPoint;
	
	if(endIndex > startIndex)						 
													 
																  
	{
		splitPoint = SplitArray(array, pivot, startIndex, endIndex);
													  
													  
		array[splitPoint] = pivot;
		QuickSort(array, startIndex, splitPoint-1);  
		QuickSort(array, splitPoint+1, endIndex);	
	}
}


int SplitArray(int* array, int pivot, int startIndex, int endIndex)
{
	int leftBoundary = startIndex;
	int rightBoundary = endIndex;
	
	while(leftBoundary < rightBoundary)			  
	{
		 while( pivot < array[rightBoundary]		  
				&& rightBoundary > leftBoundary)	
		 {
			  rightBoundary--;					
		 }
		 swap(array[leftBoundary], array[rightBoundary]);
		 
		 
		 while( pivot >= array[leftBoundary]		  
				&& leftBoundary < rightBoundary)	  
		 {
			  leftBoundary++;						 
		 }
		 swap(array[rightBoundary], array[leftBoundary]);
		 
	}
	return leftBoundary;							 
}
