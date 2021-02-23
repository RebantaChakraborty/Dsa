#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    char * arr;


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
void push(struct stack*ptr,char item)
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
char pop (struct  stack*ptr)

{
    if(isEmpty(ptr))
     {
          printf("Stack underflow\n");
     }
     else
     {
          char t;
          t=ptr->arr[ptr->top];
          ptr->top--;
          printf("%d is poped\n",t);
          return t;
     }
}
int ParenthesisCheck(char *exp)
{
    struct stack * sp;
    sp->top=-1;
    sp->size=100;
    sp->arr=(char*)malloc(100*sizeof(char));
    for(int i=0;exp[i]!='\0';i++)
    {
        if(*(exp+i)=='(')
        {
            push(sp,'(');
        }
        else if(exp[i]==')')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            else
            {
                pop(sp);
            }
            
        }
    }
    if(isEmpty(sp))
    {
       return 1;
    }
    else
    {
        return 0;
    }
    

}


int main()
{
     int n;
  char a[100]="(a+b";
   
  if(ParenthesisCheck(a))
  {
      printf("Matching");

  }
  else
  {
    printf("Not Matching");
  }
  
  

   
   
    return 0;
}

