#include<stdio.h>
void main()
{
	int j,i,n,t;	
	printf("enter number of array elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
	  	{
	    		if (a[j] > a[j+1])
	    			{
	      				t=a[j];
	      				a[j]=a[j+1];
	      				a[j+1] =t;
	    			}
	  	}
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", a[i]);
	}
}
