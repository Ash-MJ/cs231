	/*
	11,14a.SINGLE LL
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
		int key,x,c,l,n;
		struct node *head,*temp,*ptr,*ptr1;
		head=(struct node*)malloc(sizeof(struct node));
		head->data=0;
		head->link=NULL;

		do
		{
			ptr=head;
			printf("\nMENU\n1.insertion(begin)\n2.Insertion(end)\n3.Insertion(after key)\n4.Deletion(front)\n5.Deletion(end)\n6.Deletion(key)\n7.Search\n8.Display\nEnter choice:");
			scanf("%d",&c);
			if(c==1)
			{
				ptr=head;
				temp=(struct node*)malloc(sizeof(struct node));
				temp->link=ptr->link;	
				ptr->link=temp;
				printf("Enter data: ");
				scanf("%d",&x);
				temp->data=x;
			}
			else if(c==2)
			{
				while(ptr->link!=NULL)
				{
				ptr=ptr->link;
				}
				temp=(struct node*)malloc(sizeof(struct node));
				ptr->link=temp;
				printf("Enter data: ");
				scanf("%d",&x);
				temp->data=x;
				temp->link=NULL;
			}
			else if(c==3)
			{
				printf("Enter key: ");
				scanf("%d",&key);
				ptr=ptr->link;
				while(ptr!=NULL)
				{
					if(ptr->data==key)
					{
						temp=(struct node*)malloc(sizeof(struct node));
						ptr1=ptr->link;
						ptr->link=temp;
						temp->link=ptr1;
						printf("Enter data: ");
						scanf("%d",&x);
						temp->data=x;
					}
					ptr=ptr->link;
				}
			}
			else if(c==4)
			{
				ptr=head;
				ptr1=ptr->link;
				ptr->link=ptr1->link;
				free(ptr1);
			}
			else if(c==5)
			{
				while(ptr->link!=NULL)
				{
					ptr1=ptr;
					ptr=ptr->link;
				}
				ptr1->link=NULL;
			}
			else if(c==6)
			{
				if(ptr->link==NULL)
				{
					printf("List is empty!!!");
				}
				else
				{
					printf("Enter key: ");
					scanf("%d",&key);
					l=0;
					while(ptr->link!=NULL)
					{
						ptr1=ptr;
						ptr=ptr->link;
						if(ptr->data==key)
						{
							ptr1->link=ptr->link;
							free(ptr);
							l+=1;
						}
					}
					if(l==0)
					{
						printf("Key not found!!!");
					}
				}
			}
			else if(c==7)
			{
				if(ptr->link==NULL)
				{
					printf("Empty list!!!");
				}
				ptr=ptr->link;
				l=0;
				n=0;
				printf("Enter key: ");
				scanf("%d",&key);
				while(ptr!=NULL)
				{
					n=n+1;
					if(ptr->data==key)
					{
						printf("\nElement found at %d",n);
						l+=1;
						break;
					}
					ptr=ptr->link;
				}
				if(l==0)
				{
					printf("\nElement not found...");
				}
			}
			else if(c==8)
			{
				ptr=ptr->link;
				while(ptr!=NULL)
				{
					printf("%d -> ",ptr->data);
					ptr=ptr->link;
				}
				printf("NULL");
			}
		}while(c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8);
	}



	OUTPUT:

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:1
	Enter data: 3

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:1
	Enter data: 4

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	4 -> 3 -> NULL
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:2
	Enter data: 1

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	4 -> 3 -> 1 -> NULL
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:3
	Enter key: 3
	Enter data: 2

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	4 -> 3 -> 2 -> 1 -> NULL
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:4

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	3 -> 2 -> 1 -> NULL
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:5

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	3 -> 2 -> NULL
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:6
	Enter key: 2

	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:8
	3 -> NULL
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:7
	Enter key: 3

	Element found at 1
	MENU
	1.insertion(begin)
	2.Insertion(end)
	3.Insertion(after key)
	4.Deletion(front)
	5.Deletion(end)
	6.Deletion(key)
	7.Search
	8.Display
	Enter choice:9






