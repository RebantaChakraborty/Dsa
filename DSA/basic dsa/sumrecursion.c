#include<stdio.h>
#include<stdlib.h>
int sum(int k)
{
    if(k==1)
    {
        return 1;
    }
    else
    {
        return k+sum(k-1);
    }
    
}
void main()
{
    printf("%d",sum(5));
}