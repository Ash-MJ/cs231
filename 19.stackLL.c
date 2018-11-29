	/*
	19.STACK USING LL
	NAME :ASHISH MATHEW JOHN
	ROLL No. :13
	*/

	#include<stdio.h>
	#include<stdlib.h>
	struct node
	{
		int data;
		struct node *link;
	};
	void main()
	{
		int c;
		struct node *temp,*T,*head;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=0;
		temp->link=NULL;
		head=temp;
		T=head->link;
		do
		{
			printf("\nCHOOSE\n1.PUSH\n2.POP\n3.DISPLAY\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
				{
					temp=(struct node*)malloc(sizeof(struct node));
					printf("enter the element: ");
					scanf("%d",&temp->data);
					temp->link=head->link;
					head->link=temp;
					T=head->link;
					break;
				}
				case 2:
				{
					if(T==NULL)
					{	
						printf("stack is empty!!!");
					}
					else
					{
						printf("popped out: %d",T->data);
						temp=T;
						T=T->link;
						head->link=T;
						free(temp);
					}
					break;
				}
				case 3:
				{
					printf("elements: ");
					temp=T;
					while(temp!=NULL)
					{
						printf("%d ->",temp->data);
						temp=temp->link;
					}
					printf("NULL");
					break;
				}
				default:
				{
					printf("invalid choice");
				}
			}
		}while(c==1 || c==2 || c==3);

	}




	OUTPUT:

	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	1
	enter the element: 2

	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	1
	enter the element: 5

	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	3
	elements: 5 ->2 ->NULL
	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	2
	popped out: 5
	CHOOSE
	1.PUSH
	2.POP
	3.DISPLAY
	3
	elements: 2 ->NULL
