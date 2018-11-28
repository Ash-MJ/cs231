

#include<stdio.h>
void main()
{
	int a[50],k,i,n,p=0;
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number to be searched\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			p=i+1;
			break;
		}
	}
	if(p!=0)
		printf("%d is found in the list, at position %d\n",k,p);
	else
		printf("%d is not in the list\n",k);
}



OUTPUT:
Enter the size 5
Enter elements
3
1
8
2
5
Enter number to be searched
8
8 is found in the list, at position 3


