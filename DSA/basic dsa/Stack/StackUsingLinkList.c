#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
}*top=NULL;
int isEmpty(struct stack*top)
{
    if(top==NULL)
    {
        return 1;
    }
   else
   {
       return 0;
   }
}
int isFull()
{
    struct stack*s=(struct stack*)malloc(sizeof(struct stack));       
    if(s==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
         
    }
    
}
struct stack * push(struct stack*top,int x)

{
    if(isFull())
    {
        printf("Memory is full");
    }
    else
    {
        struct stack * s=(struct stack*)malloc(sizeof(struct stack));
        s->data=x;
        printf("%d is pushed\n",x);
        s->next=top;
         top=s; 
              
    }
    
    return top;
}
void display(struct stack*top)
{
    struct stack* temp= top;
    while(temp!=NULL)
    {
        printf("Element:%d\n",temp->data);
        temp=temp->next;
    }
}
int pop(struct stack**top)
 {
     if(isEmpty(*top))
     {
       printf("Stack is empty\n");
     }
     else
     {
      struct stack * temp=*top;
      *top=(*top)->next;
      temp->next=NULL;
      int x=temp->data;
      printf("%d is poped out\n",x);
      free(temp);
      return x;   
         
     }
     
 }
 void peek(struct stack *top,int pos)
 {
   if(isEmpty(top))
   {
     printf("Nothing to show\n");

   }
   else
   {
       struct stack*temp=top;
       for(int i=1;i<pos;i++)
       {
           temp=temp->next;
       }
       printf("value:%d\n",temp->data);
   }
   
 }
void Stackup(struct stack*top)
{
     if(isEmpty(top))
   {
     printf("Empty at top\n");

   }
   else
   {
       printf("%d is the topmost element\n",top->data);
   }
}
    
void StackBottom(struct stack*top)
{
    
     if(isEmpty(top))
   {
     printf("Empty at bottom\n");

   }
   else
   {
       
           struct stack *temp=top;
           while(1)
           {
               if(temp->next==NULL)
               {
                   break;

               }
               temp=temp->next;
           }
       printf("%d is the bottom most element\n",temp->data);
   
   
    }
} 


int main()
{
   int choice,desire,position;int item;int po;
   while(1)
   {
     printf("Press 1 : Push\nPress 2: Pop\nPress 3: Peek\nPress 4: Display\nPress 5: stack bottom\nPress 6:stack up\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:printf("Enter the item");
                scanf("%d",&item);
                top=push(top,item);break;
         case 2:po=pop(&top);break;
         case 3:printf("Enter the position");
                scanf("%d",&position);
                peek(top,position);break;
         case 4:display(top);break;
         case 5: StackBottom(top);break;
         case 6: Stackup(top);break;
         default:printf("wrong choice");break;
     }
     printf("Press 1 to continue else press 0:");
     scanf("%d",&desire);
     if(desire==0)
     {
         break;
     }
   }
    return 0;
    


}