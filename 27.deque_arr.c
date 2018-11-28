#include<stdio.h>
#include<stdlib.h>

void main()
{
    int queue[15],i,front=0,choice,end=0,ele,cho,limit=14;

    do
    {
        printf("\nMENU\n1.Insertion(Front)\n2.Deletion(Front)\n3.Insertion(End)\n4.Deletion(End)\n5.Display\n6.Exit\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {

                
            case 1: printf("Enter the value of element: ");
                    scanf("%d",&ele);
                    if(front==0 || front==1)
                    {
                        printf("NO space: ");
                    }
                    
                    else
                    {
                        front-=1;
                        queue[front]=ele;
                    }
                    break;
                    
            case 2: if(front==0)
                    {
                        printf("Queue is EMPTY");
                    }
                    else if(front==end)
                    {
                        printf("Deleted %d",queue[end]);
                        front=0;
                        end=0;
                    }
                    else
                    {
                        printf("Deleted %d",queue[front]);
                        front+=1; 
                    }
                    break;

            case 3: printf("Enter the value of element: ");
                    scanf("%d",&ele);
                    if(front==0)
                    {
                        front=1;
                        end=1;
                        queue[end]=ele;
                    }
                    else if(end==limit)
                    {
                        printf("Queue is FULL");
                    }
                    else
                    {
                        end+=1;
                        queue[end]=ele;
                    }
                    break;

            

            case 4: if(front==0)
                    {
                        printf("Queue is EMPTY");
                    }
                    else if(front==end)
                    {
                        printf("Deleted %d",queue[end]);
                        front=0;
                        end=0;
                    }
                    else
                    {
                        printf("Deleted %d",queue[end]);
                        end-=1; 
                    }
                    break;
                
            case 5: if(front==0)
                    {
                        printf("Queue is EMPTY");
                    }
                    else
                    {
                        for(i=front;i<=end;i++)
                        {
                            printf("%d -> ",queue[i]);
                        }
                        printf("\nFront: %d",front);
                        printf("\nEnd: %d",end);
                    }
        } 
    }while(choice==1 || choice==2 || choice==3 || choice==4 ||choice==5);

}



OUTPUT:

MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 1 3
Enter the value of element: 4

MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 3
Enter the value of element: 5

MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 3
Enter the value of element: 6

MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 5
4 -> 5 -> 6 -> 
Front: 1
End: 3
MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 2
Deleted 4
MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 5
5 -> 6 -> 
Front: 2
End: 3
MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 1
Enter the value of element: 4

MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 5
4 -> 5 -> 6 -> 
Front: 1
End: 3
MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 4
Deleted 6
MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 4
Deleted 5
MENU
1.Insertion(Front)
2.Deletion(Front)
3.Insertion(End)
4.Deletion(End)
5.Display
6.Exit
Enter Choice: 5
4 -> 
Front: 1
End: 1
