#include<stdio.h>
void main() 
{
	int i,j,n,s,a[50];
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=1;i<n;i++)
	{
		s=a[i];
		j=i-1;
		while((s<a[j])&&(j>=0))
		{
	 		a[j+1]=a[j];
		   	j=j-1;
		}
	        a[j+1]=s;
	}

	printf("After Sorting \n");
	for(i=0; i<n; i++)
		{
	  	    	printf("%d",a[i]);
		}

}
