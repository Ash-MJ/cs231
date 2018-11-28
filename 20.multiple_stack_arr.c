#include<stdio.h>
#include<stdlib.h>
void main()
{
  	int arr[40],top1=0,top2=40,c,i;
    	do
	{        
        	printf("\nChoose\n\nSTACK 1        STACK 2");
                printf("\n1.PUSH         4.PUSH");
                printf("\n2.POP          5.POP");   
                printf("\n3.DISPLAY      6.DISPLAY");
                printf("\nEnter Choice: ");
        	scanf("%d",&c);
		switch(c)
       		{
			case 1:
            			top1=top1+1;
            			printf("enter the element: ");
            			scanf("%d",&arr[top1]);
        	        	break;
        	       case 2:         	
            			if(top1==0)
            			{
                			printf("stack is empty!!!");
            			}
           			else
            			{
                			printf("popped out: %d",arr[top1]);
                			arr[top1]=0;
                			top1-=1;
            			}
				break;
                  	case 3:        	
            			printf("elements: ");
            			for(i=top1;i>0;i--)
            			{
               	 			printf("%d \n",arr[i]);
            			}
            			printf("NULL");
				break;
        		case 4:	        	        	
            			top2=top2-1;
            			printf("enter the element: ");
            			scanf("%d",&arr[top2]);
				break;
        	       	case 5:
            			if(top2==40)
            			{
                			printf("stack is empty!!!");
            			}
            			else
            			{
                			printf("popped out: %d",arr[top2]);
                			arr[top2]=0;
                			top2+=1;
            			}
				break;
        		case 6:
                    		printf("elements: ");
            			for(i=top2;i<40;i++)
            			{	
                			printf("%d \n",arr[i]);
            			}
            			printf("NULL");
				break;
		}
  	}while(c==1 || c==2 || c==3 || c==4 ||c==5 || c==6);
}



OUTPUT:

Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 1
enter the element: 2

Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 3
elements: 2 
NULL
Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 2
popped out: 2
Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 3
elements: NULL
Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 4
enter the element: 5

Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 6
elements: 5 
NULL
Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 5
popped out: 5
Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 6
elements: NULL
Choose

STACK 1        STACK 2
1.PUSH         4.PUSH
2.POP          5.POP
3.DISPLAY      6.DISPLAY
Enter Choice: 
