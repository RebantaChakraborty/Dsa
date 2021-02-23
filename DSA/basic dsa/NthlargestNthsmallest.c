#include<stdio.h>
#include<stdlib.h>
int smallest(int a[],int n)

{
    int s=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }


    }
    return s;

}
int largest(int a[],int n)

{
    int l=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }


    }
    return l;

}
int main()
{
    int n,d,l1,l2,s1,s2;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l1=smallest(arr,n);
    s1=largest(arr,n);

     printf("Enter the degree of search(LARGEST)\n");
    scanf("%d",&d);
    for(int i=0;i<d;i++)
    {   
        l2=l1;
         l1=smallest(arr,n);
        for(int j=0;j<n;j++)
        {
           


            if(arr[j]>l1 && arr[j]<l2)
            {
                l1=arr[j];
            }
            if(i==0 && arr[j]>l1)
            {
                l1=arr[j];
            }
            

        }
    }
    printf("%d\n",l1);
    printf("Enter the degree of search(SMALLEST)\n");
    scanf("%d",&d);
    for(int i=0;i<d;i++)
    {   
        s2=s1;
         s1=largest(arr,n);
        for(int j=0;j<n;j++)
        {
           


            if(arr[j]<s1 && arr[j]>s2)
            {
                s1=arr[j];
            }
            if(i==0 && arr[j]<s1)
            {
                s1=arr[j];
            }
            

        }
    }
    printf("%d",s1);
    

    



}