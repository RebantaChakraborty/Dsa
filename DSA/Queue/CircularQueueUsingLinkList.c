#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue*next;

};
struct queue*front=NULL;
struct queue*rear=NULL;
void enqueue(int x)
{
    struct queue * node=(struct queue*)malloc(sizeof(struct queue));
    node->data=x;
    node->next=NULL;

    if(front==NULL && rear==NULL)
    {
        rear=node;
        front=node;
        rear->next=front;
    }
    else
    {
        rear->next=node;
        rear=rear->next;
        rear->next=front;
    }
    
}
int dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        struct queue*temp=(struct queue*)malloc(sizeof(struct queue));
        temp->data=front->data;
        printf("%d is deleted\n",temp->data);
        if(front==rear)
        {
            rear=NULL;
            front=NULL;

        }
        else
        {
            rear->next=front->next;
            front=front->next;
                
            
        }
        int x=temp->data;
        free(temp);
        return x;
    }
    
}
void display()
{
    if(front==NULL && rear==NULL)
    {
        printf("Nothing to display\n");
    }
    else
    {
        
    
    
    struct queue*temp=front;
    while(temp!=rear)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
 }
}
int size()
{
  struct queue*temp=front;
   int c;
   while(temp!=NULL)
   {
       c++;
       temp=temp->next;
   }
   return c;
}
void peek(int pos)
{
    if(pos>size()||pos<=0)
    {
        printf("Invalid position given\n");
    }
    else
    {
        struct queue*temp=front;
        int i=1;
        while(i==pos)
        {
          temp=temp->next;i++;
        }
        printf("Element:%d\n",temp->data);
    }
    
}
int main()
{
  int choice;int desire;int d;int i;int pk;
  while(1)
  {
     printf("PRESS1:ENQUEUE\nPRESS 2:DEQUEUE\nPRESS 3:DISPLAY\n4:PEEK");
     scanf("%d",&choice);
     switch (choice)
     {
      case 1:printf("Enter the element to be inserted\n");
            scanf("%d",&i);
             enqueue(i);
             break;
      case 2:d=dequeue();break;
      case 3:display();break;
      case 4:printf("Enter the position\n");
             scanf("%d",&pk);
              peek(pk);break;
      default:printf("Invalid Option\n");
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