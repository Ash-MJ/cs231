	/*
	8.QUICK SORT RECURSIVE
	*/

	#include<stdio.h>
	void quicksort(int*arr,int l,int h)
	{
		int pivot,i,j,t;
		if(l<h) 
		{
			pivot=l; 
			i=l;
			j=h;
			while(i<j) 
			{
				while(arr[i]<=arr[pivot]&&i<=h)
					i++;     
				while(arr[j]>arr[pivot]&&j>=l)
					j--;
				if(i<j)
				{
					t=arr[i];
					arr[i]=arr[j];
					arr[j]=t;
				}
			}
			t=arr[j];
			arr[j]=arr[pivot];
			arr[pivot]=t;
			quicksort(arr,l,j-1);
			quicksort(arr,j+1,h);
		}
	}
	int main()
	{
		int arr[20],n,i;
		printf("Enter the size\n");
		scanf("%d",&n);
		printf("Enter the elements\n");
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		quicksort(arr,0,n-1);
		printf("Sorted array\n");
		for(i=0;i<n;i++)
			printf("%d",arr[i]);
	 return 0;
	}



	OUTPUT:
	Enter the size
	4
	Enter the elements
	1
	6
	2
	4
	Sorted array
	1 2 4 6


