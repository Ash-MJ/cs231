#include<stdio.h>
int stack[50],c,n,top,x,i;
int main()
{
	top=-1;
    	printf("Enter the size of stack:");
	scanf("%d",&n);
    	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    	do
    	{
        	printf("\n Enter the Choice:");
        	scanf("%d",&c);
        	switch(c)
        	{
            		case 1:
            		{
                		if(top>=n-1)
    				{
        				printf("\nStack overflow");
         
    				}
    				else
    				{
        				printf("Enter a value to be pushed:");
        				scanf("%d",&x);
        				top++;
        				stack[top]=x;
    				}
				break;
            		}
            		case 2:
            		{
                		if(top<=-1)
    				{
        				printf("\nStack underflow");
    				}
    				else
    				{
        				printf("\nThe popped element is %d",stack[top]);
        				top--;
    				}
                		break;
            		}
            		case 3:
            		{
                		if(top>=0)
    				{
        				printf("\nThe elements in stack \n");
        				for(i=top; i>=0; i--)
            					printf("\n%d",stack[i]);
        				printf("\nEnter Choice");
    				}
    				else
    				{
        				printf("\nThe stack is empty");
    				}
                		break;
            		}
            		case 4:
            		{
                		printf("\n\EXIT  ");
                		break;
			}
            		default:
            		{
            	    		printf ("\nPlease Enter a Valid Choice");
            		}
                 
        	}
    	}while(c==1 || c==2 || c==3 || c==4);
}
	


