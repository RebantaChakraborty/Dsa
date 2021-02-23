#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int front;
    int rear;
    int size;
    int *arr;

};
void enque(struct queue*q,int x)
{
    if((q->front==(q->rear+1)%q->size))
    {
        printf("Queue Overflow\n");

    }
    else
    {
        if(q->front==-1 && q->rear==-1)
        {
            q->front=q->rear=0;
        }
        else
        {
            q->rear=(q->rear+1)%q->size;
        }
        q->arr[q->rear]=x;
    
    printf("%d is inserted\n",x);
    }
}
int deque(struct queue*q)
{ 
    int g;
    if (q->rear==-1 && q->front==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        g=q->arr[q->front];
        printf("%d is deleted\n",g);
        
            if(q->rear==q->front)
            {
                
                q->front=q->rear=-1;
            }
            else
            {
                
                    q->front=(q->front+1)%q->size;
                
            }
            
    }
    return g;
}
 void display(struct queue*q)
 {   
     if(q->front==-1 && q->rear==-1)
     {
         printf("Nothing to display\n");
     }
     else
     {
    
     
     
    int j=1;int i;
     for( i=q->front;i!=q->rear;i=(i+1)%q->size)
     {
         printf("ELEMENT %d:%d\n",j,q->arr[i]);j++;
     }
      printf("ELEMENT %d:%d\n",j,q->arr[i]);j++;

    }
}


int main()
{
    struct queue * q;
    q->front=-1;
    q->rear=-1;
    printf("Enter the number of elements\n");
    scanf("%d",&q->size);
    q->arr=(int*)malloc(q->size*sizeof(struct queue));
    int choice,desire;int d;int i;
    while (1)
    {
     printf("PRESS1:ENQUEUE\nPRESS 2:DEQUEUE\nPRESS 3:DISPLAY\n");
     scanf("%d",&choice);
     switch (choice)
     {
      case 1:printf("Enter the element to be inserted\n");
            scanf("%d",&i);
             enque(q,i);
             break;
      case 2:d=deque(q);break;
      case 3:display(q);break;
      default:printf("INVALID INPUT");

     }
     printf("Enter 1 to continue else press 0\n");
     scanf("%d",&desire);
     if(desire==0)
     {
         break;
     }
    }
    
    return 0;
}