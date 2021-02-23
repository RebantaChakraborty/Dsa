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
int match(char a,char b)
{
    if(a=='(' && b==')')
    {
        return 1;
    }
     if(a=='{' && b=='}')
    {
        return 1;
    }
     if(a=='[' && b==']')
    {
        return 1;
    }
    return 0 ;
    
}
int ParenthesisCheck(char *exp)
{
    char popped_char;
    struct stack * sp;
    sp->top=-1;
    sp->size=100;
    sp->arr=(char*)malloc(100*sizeof(char));
    for(int i=0;exp[i]!='\0';i++)
    {
        if(*(exp+i)=='('||*(exp+i)=='{'||*(exp+i)=='{')
        {
            push(sp,*(exp+i));
        }
        else if(exp[i]==')'||*(exp+i)=='}'||*(exp+i)==']')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            else
            {
                popped_char=pop(sp);
            }
            
            if(!match(popped_char,*(exp+i)))
            {
                return 0;
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
  char a[100]="[x*(a+b)-z]";
   
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

