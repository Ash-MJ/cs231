#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
    	struct node *llink,*rlink;
};
void main()
{
    	int key,x,c,l,n;
    	struct node *head,*temp,*ptr,*ptr1,*ptr2;
    	head=(struct node*)malloc(sizeof(struct node));
    	head->data=0;
    	head->llink=NULL;
    	head->rlink=NULL;
	do
    	{
        	ptr=head;
        	printf("\nMENU\n1.Insertion(begin)\n2.Insertion(end)\n3.Insertion(after key)\n4.Deletion\n5.Search\n6.Display\nEnter choice:");
        	scanf("%d",&c);
        	if(c==1)
        	{
			ptr=head;
			printf("Enter data: ");
            		scanf("%d",&x);
            		if(ptr->rlink==NULL)
            		{
                		temp=(struct node*)malloc(sizeof(struct node));
                		ptr->rlink=temp;
                		temp->llink=ptr;
                		temp->rlink=NULL;
                		temp->data=x;
            		}
            		else 
            		{
                		temp=(struct node*)malloc(sizeof(struct node));
                		ptr1=ptr->rlink;
                		ptr->rlink=temp;
                		temp->llink=ptr;
                		temp->rlink=ptr1;
                		ptr1->llink=temp;
                		temp->data=x;
            		}
        	}
        	else if(c==2)
        	{
			while(ptr->rlink!=NULL)
            		{
                		ptr=ptr->rlink;
            		}
            		temp=(struct node*)malloc(sizeof(struct node));
            		ptr->rlink=temp;
            		printf("Enter data: ");
            		scanf("%d",&x);
            		temp->data=x;
            		temp->rlink=NULL;
            		temp->llink=ptr;
            	}
		else if(c==3)
        	{
         		printf("Enter key: ");
            		scanf("%d",&key);
            		ptr=ptr->rlink;
            		while(ptr!=NULL)
            		{
                		if(ptr->data==key)
                		{
                    			temp=(struct node*)malloc(sizeof(struct node));
                    			ptr1=ptr->rlink;
                    			ptr->rlink=temp;
                    			temp->llink=ptr;
                    			ptr1->llink=temp;
                    			temp->rlink=ptr1;
                    			printf("Enter data: ");
                    			scanf("%d",&x);
                    			temp->data=x;
				}
                		ptr=ptr->rlink;
            		}	
        	}
        	else if(c==4)
        	{
            		if(ptr->rlink==NULL)
            		{
                		printf("List is empty!!!");
            		}
            		else
            		{
                		printf("Enter key: ");
                		scanf("%d",&key);
                		l=0;
                		while(ptr->rlink!=NULL)
                		{
                    			ptr1=ptr;
                    			ptr=ptr->rlink;
                    			ptr2=ptr->rlink;
                    			if(ptr->data==key)
                    			{
                        			if(ptr->rlink==NULL)
                       			 	{
                            				ptr1=ptr->llink;
                            				ptr1->rlink=NULL;
                            				free(ptr);
                            				l+=1;    

                        			}
                        			else
                        			{
                            				ptr1=ptr->llink;
                            				ptr2=ptr->rlink;
                            				ptr1->rlink=ptr2;
                            				ptr2->llink=ptr1;
                            				free(ptr);
                            				l+=1;
                        			}
                    			}
                		}
                		if(l==0)
                		{
                    			printf("Key not found!!!");
                		}
            		}
        	}
        	else if(c==5)
        	{
			ptr=head;
			n=0;
            		if(ptr->rlink==NULL)
            		{
                		printf("Empty list!!!");
            		}
            		else
            		{
                		ptr=ptr->rlink;
                		l=0;
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
                    			ptr=ptr->rlink;
                		}
                		if(l==0)
                		{
                    			printf("\nElement not found...");
                		}
            		}
        	}
        	else if(c==6)
        	{
            		ptr=ptr->rlink;
            		while(ptr!=NULL)
            		{
                		printf("%d -> ",ptr->data);
                		ptr=ptr->rlink;
            		}
            		printf("NULL");
        	}
    	}while(c==1 || c==2 || c==3 || c==4 || c==5 || c==6);
}
