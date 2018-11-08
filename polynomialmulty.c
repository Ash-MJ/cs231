#include<stdio.h>
#include<stdlib.h>
struct node
{
  	int exp,coef;
    	struct node *link;
};
void main()
{
    	struct node *temp,*h,*h1,*h2,*ptr,*ptr1,*ptr2;
    	int e,c,cho,t,tcoef;
    	h=(struct node*)malloc(sizeof(struct node));
    	h->exp=0;
    	h->coef=0;
    	h->link=NULL;	
    	h1=(struct node*)malloc(sizeof(struct node));
    	h1->exp=0;
    	h1->coef=0;
    	h1->link=NULL;
    	h2=(struct node*)malloc(sizeof(struct node));
    	h2->exp=0;
    	h2->coef=0;
    	h2->link=NULL;
    	ptr=h1;
    	printf("Polynomial 1 \n");
    	do
    	{
        	printf("Enter coefficient: ");
        	scanf("%d",&c);
        	printf("Enter exponent: ");
        	scanf("%d",&e);
        	temp=(struct node*)malloc(sizeof(struct node));
        	temp->exp=e;
        	temp->coef=c;
        	temp->link=NULL;
        	ptr->link=temp;
        	ptr=ptr->link;
        	printf("1. Add elements\n2. Continue\nEnter choice: ");
        	scanf("%d",&cho);
    	}while(cho==1);
    	printf("polynomial 2 \n");
    	ptr=h2;
    	do
    	{
        	printf("Enter coefficient: ");
        	scanf("%d",&c);
        	printf("Enter exponent: ");
        	scanf("%d",&e);
        	temp=(struct node*)malloc(sizeof(struct node));
        	temp->exp=e;
        	temp->coef=c;
        	temp->link=NULL;
        	ptr->link=temp;
        	ptr=ptr->link;
        	printf("1. Add elements\n2. Continue\nEnter choice: ");
        	scanf("%d",&cho);
    		}while(cho==1);
    		ptr1=h1->link;
    		printf("F(a) = ");
    		while(ptr1!=NULL)
    		{
        		printf("%dX^%d + ",ptr1->coef,ptr1->exp);
        		ptr1=ptr1->link;
    		}
    		printf("0\n");
    		ptr1=h2->link;
    		printf("F(b) = ");
    		while(ptr1!=NULL)
    		{
        		printf("%dX^%d + ",ptr1->coef,ptr1->exp);
        		ptr1=ptr1->link;
    		}
    		printf("0\n");
    		ptr1=h1->link;
    		while(ptr1!=NULL)
    		{
        		ptr2=h2->link;
        		while(ptr2!=NULL)
        		{
            			t=(ptr1->exp)+(ptr2->exp);
            			tcoef=(ptr1->coef)*(ptr2->coef);
            			ptr=h->link;
            			while(ptr!=NULL)
            			{
                			if(ptr->exp==t)
                			{
                    				ptr->coef+=tcoef;
                    				break;
        
                			}
                			else if(ptr->link==NULL)
                			{
                    				temp=(struct node*)malloc(sizeof(struct node));
                    				ptr->link=temp;
                    				temp->exp=t;
                    				temp->coef=tcoef;
                    				temp->link=NULL;
                    				break;
                	 		}
                			else if((ptr->link)->exp<t)
                			{
                    				temp=(struct node*)malloc(sizeof(struct node));
                    				temp->link=ptr->link;
                    				ptr->link=temp;
                    				temp->exp=t;
                    				temp->coef=tcoef;
                    				break;
                			}
                			ptr=ptr->link;
            			}
            			if(ptr==NULL)
            			{
                			temp=(struct node*)malloc(sizeof(struct node));
                			h->link=temp;
                			temp->coef=tcoef;
                			temp->exp=t;
                			temp->link=NULL;
            			}
          			ptr2=ptr2->link;
        		}
			ptr1=ptr1->link;
    		}
    		ptr1=h->link;
    		printf("F(r) = ");
    		while(ptr1!=NULL)
    		{
        		printf("%dX^%d + ",ptr1->coef,ptr1->exp);
        		ptr1=ptr1->link;
    		}
    		printf("0\n");
}
