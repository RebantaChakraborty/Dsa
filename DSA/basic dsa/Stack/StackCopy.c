#include<stdio.h>
#include<stdlib.h>
int n;
 
struct stack
{
    int top;
    int size;
    int * arr;


};
  
   
int isEmpty(struct  stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;

    }
   else
    {
         return 0;
    }

}
int isFull(struct  stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;

    }
   else
    {
         return 0;
    }
}
void push(struct stack*ptr,int item)
{ 
      if(isFull(ptr))
    {
        printf("Stack is Full\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=item;

    }
    


}
int pop (struct  stack*ptr)

{
    if(isEmpty(ptr))
     {
          printf("Stack underflow\n");
     }
     else
     {
          int t;
          t=ptr->arr[ptr->top];
          ptr->top--;
          printf("%d is poped\n",t);
          return t;
     }
}

void peek(struct stack*ptr,int pos)

{
    if((ptr->top+1-pos<0)||(pos<=0) )
     {
          printf("Invalid position entered\n");
     }
     else
     {
         printf("%d:is the value\n",ptr->arr[ptr->top+1-pos]);
     }
     
    
}
void display(struct stack*ptr)
{
    for(int i=1;i<=ptr->top+1;i++)
    {
        printf("At position %d , %d is the value\n",i,ptr->arr[ptr->top+1-i]);

    }

}
void copy(struct stack*ptr,struct stack*duplicate)
{
    printf("Copy Initiated.....\n");
    duplicate->top=-1;
  for(int i=0;i<=ptr->top;i++)
  {
      duplicate->arr[i]=ptr->arr[i];
      duplicate->top++;
  }
 
}

int main(void)
{
    
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=n;
    s->arr=(int*)malloc(s->size*sizeof(int));
    struct stack*s2;
    s2=(struct stack*)malloc(sizeof(struct stack));
    s2->top=-1;
    s2->size=n;
    s2->arr=(int*)malloc(s2->size*sizeof(int));
    int po;int ch;int desire;int pu;int pos;
  
    while(1)
    {
     printf("Press 1 : Push\nPress 2: Pop\nPress 3: Peek\nPress 4: Display\nPress 5: To initiate Copying\nPress 6:Display second stack\n");
     scanf("%d",&ch);
     switch (ch)
     {
        case 1:printf("Enter the item");
               scanf("%d",&pu);
               push(s,pu);
               break;
        case 2:po=pop(s);
               break;
        case 3:printf("Enter the position");
               scanf("%d",&pos);
               peek(s,pos);break;
        case 4:display(s);break;
        case 5:copy(s,s2);break;
        case 6:display(s2);break;       
        default:printf("Invalid Option\n");

     }
   printf("Enter 1  to continue else press 0");
   scanf("%d",&desire);
    if(desire==0)
    {
       break;
    }
   }
          
   
    return 0;
}

