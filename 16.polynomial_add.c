	/*
	16.POLYNOMIAL ADDITION
	NAME :ASHISH MATHEW JOHN
	ROLL No. :13
	*/

	#include<stdio.h>
	#include<stdlib.h>
	struct node
	{
		int exp,coef;
		struct node *link;
	};
	void main()
	{
		struct node *t,*h,*h1,*h2,*ptr,*ptr1,*ptr2;
		int e,c,cho;
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
			t=(struct node*)malloc(sizeof(struct node));
			t->exp=e;
			t->coef=c;
			t->link=NULL;
			ptr->link=t;
			ptr=ptr->link;
			printf("1. Add more elements\n2. Continue\nEnter choice: ");
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
			t=(struct node*)malloc(sizeof(struct node));
			t->exp=e;
			t->coef=c;
			t->link=NULL;
			ptr->link=t;
			ptr=ptr->link;
			printf("1. Add more elements\n2. Continue\nEnter choice: ");
			scanf("%d",&cho);
		}while(cho==1);
		ptr=h;
		ptr1=h1->link;
		ptr2=h2->link;
		if(ptr1==NULL || ptr2==NULL)
		{
			printf("Addition not possible");
		}
		else
		{
			while(ptr1!=NULL && ptr2!=NULL)
			{
				t=(struct node*)malloc(sizeof(struct node));
				ptr->link=t;
				t->link=NULL;
				ptr=ptr->link;
				if(ptr1->exp==ptr2->exp)
				{
					ptr->exp=ptr1->exp;
					ptr->coef=ptr1->coef+ptr2->coef;
					ptr1=ptr1->link;
					ptr2=ptr2->link;
				}
				else if(ptr1->exp > ptr2->exp)
				{
					ptr->exp=ptr1->exp;
					ptr->coef=ptr1->coef;
					ptr1=ptr1->link;
				}
				else if(ptr2->exp > ptr1->exp)
				{
					ptr->exp=ptr2->exp;
					ptr->coef=ptr2->coef;
					ptr2=ptr2->link;
				}
			}
			while(ptr1!=NULL)
			{
				t=(struct node*)malloc(sizeof(struct node));
				ptr->link=t;
				t->link=NULL;
				ptr=ptr->link;
				ptr->exp=ptr1->exp;
				ptr->coef=ptr1->coef;
				ptr1=ptr1->link;            
			}
			while(ptr2!=NULL)
			{
				t=(struct node*)malloc(sizeof(struct node));
				ptr->link=t;
				t->link=NULL;
				ptr=ptr->link;
				ptr->exp=ptr2->exp;
				ptr->coef=ptr2->coef;
				ptr2=ptr2->link;            
			}            
		}
		printf("\nF(s) = F(a) + F(b)\n");
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
		ptr1=h->link;
		printf("F(s) = ");
		while(ptr1!=NULL)
		{
			printf("%dX^%d + ",ptr1->coef,ptr1->exp);
			ptr1=ptr1->link;
		}
		printf("0\n");
	}



	OUTPUT:
	Polynomial 1 
	Enter coefficient: 2
	Enter exponent: 2
	1. Add more elements
	2. Continue
	Enter choice: 1
	Enter coefficient: 3
	Enter exponent: 1
	1. Add more elements
	2. Continue
	Enter choice: 1 2
	polynomial 2 
	Enter coefficient: 3
	Enter exponent: 3
	1. Add more elements
	2. Continue
	Enter choice: 1
	Enter coefficient: 6
	Enter exponent: 1
	1. Add more elements
	2. Continue
	Enter choice: 2

	F(s) = F(a) + F(b)
	F(a) = 2X^2 + 3X^1 + 0
	F(b) = 3X^3 + 6X^1 + 0
	F(s) = 3X^3 + 2X^2 + 9X^1 + 0


