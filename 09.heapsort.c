#include<stdio.h>
void main()
{
	int a[10],n,i,j,c,k,t;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		c=i;
		do
		{
			k=(c-1)/2;
			if(a[k]<a[c])
			{
				t=a[k];
				a[k]=a[c];
				a[c]=t;
			}
			c=k;
		}while(c!=0);
	}
	for(j=n-1;j>=0;j--)
	{
		t=a[0];
		a[0]=a[j];
		a[j]=t;
		k=0;
		do
		{
			c=2*k+1;
			if((a[c]<a[c+1])&&c<j-1)
				c++;
			if(a[k]<a[c]&&c<j)
			{
				t=a[k];
				a[k]=a[c];
				a[c]=t;
			}
			k=c;
		}while(c<j);
	}
	printf("\n The sorted array is:");
	for(i=0;i<n;i++)
		printf("%d \t",a[i]);
}



OUTPUT:
Enter the size of array 
4
Enter the elements:1
7
3
6

 The sorted array is:1 	3 	6 	7 	

