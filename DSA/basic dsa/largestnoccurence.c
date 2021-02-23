#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
   int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;int l1=a[0];
    for(int i=0;i<n;i++)
    {
       if(a[i]==l1)
       {
           c++;

       }
       else if(a[i]>l1)
       {
           c=1;
           l1=a[i];
       }

    }
    printf("Largest=%d\n",l1);
    printf("Occurences:%d\n",c);
    return 0;

}