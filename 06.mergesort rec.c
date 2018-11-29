	/*
	6.MERGE SORT RECURSIVE
	NAME :ASHISH MATHEW JOHN
	ROLL No. :13
	*/

	#include<stdio.h>
	void merge(int p[20],int l,int m,int h)
	{
		int l1,l2,i,q[20];
		for(l1=l,l2=m+1,i=l;l1<=m&&l2<=h;i++)
		{
			if(p[l1]<=p[l2])
				q[i]=p[l1++];
			else
				q[i]=p[l2++];
		}
		while(l1<=m)
			q[i++]=p[l1++];
		while(l2<=h)
			q[i++]=p[l2++];
		for(i=l;i<=h;i++)
			p[i]=q[i];
	}
	void sort(int a[],int l,int h)
	{ 	
		int m;
		if(l<h)
		{
			m=(l+h)/2;
			sort(a,l,m);
			sort(a,m+1,h);
			merge(a,l,m,h);
		}

	}
	int main()
	{
		int i,a[20],n;
		printf("Enter number of elements:");
		scanf("%d",&n);
		printf("Enter elements");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,0,n-1);
		printf("after sorting:");
		for(i=0;i<n;i++)
			printf("%d",a[i]);
		return 0;	
	}


	OUTPUT:
	Enter number of elements:4
	Enter elements 2
	7
	6
	8
	after sorting:2 6 7 8

