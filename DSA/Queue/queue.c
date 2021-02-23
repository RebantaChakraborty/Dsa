#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int front;
    int rear;
    int size;
    int * a;

};
void enqueue(int x,struct queue * q)
{
    if(q->rear==q->size-1)
    {
        printf("Overflow\n");
        return;

    }
    else
    {
        if(q->front==-1 && q->rear==-1)
        {
            q->front++;
            q->rear++;
        }
        else
        {
            q->rear++;
        }
        q->a[q->rear]=x;
        
    }
    

}
int deque(struct queue *q)
{
    int x;
    if(q->front==-1 && q->rear==-1)
    {
        printf("Queue underflow\n");
       
    }
     else
    {
     if(q->front==q->rear)
     {
       x=q->a[q->front];
       q->front=-1;
       q->rear=-1;
     }      
    
    else
    {
        x=q->a[q->front];
        q->front++ ;  
    }
    printf("%d is deleted",x);
   
    return x;
    } 
}
int main()
{
    struct queue*q;
    q->front=-1;
    q->rear=-1;
    int n;
    printf("Please enter ther size od the queue\n");
    scanf("%d",&n);
    q->size=n;
    q->a=(int*)malloc(q->size*sizeof(int));
    enqueue(1,q);
    enqueue(2,q);
    enqueue(3,q);
    printf("%d %d",q->a[q->front],q->a[q->rear]);
   int w= deque(q);
    printf("%d %d",q->a[q->front],q->a[q->rear]);
    return 0;
}
