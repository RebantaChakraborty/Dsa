#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
     printf("Enter the number of elements");
     scanf("%d",&n);
     int a[n];
      printf("Enter the elements");
      for(int i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      int largest=a[0];
       for(int i=0;i<n;i++)
      {
          if(a[i]>largest)
          {
              largest=a[i];
          }
      }
      int rs[n];int ng[n];
      int nge;int nrs;
         for(int i=0;i<n;i++)
      {
             for(int j=i;j<n;j++)

            {
                if(a[i]==largest || a[i]==a[n-1])
                {
                    ng[i]=-1;break;

                }
                else if(a[j]>a[i])
                {
                    ng[i]=a[j];break;
                }
            }
      }
      printf("NGE:\n");
       for(int j=0;j<n;j++)

        {
            printf("%d ",ng[j]);
        }
        for(int i=0;i<n;i++)
        {
           if(ng[i]==-1)
           {
               rs[i]=-1;
           }
         else
         {
             for(int j=0;j<n;j++)
             {
                 if( ng[i]==a[j])
                 {
             
                    for(int k=j;k<n;k++)
                    {
                        if(a[k]<ng[i])
                        rs[i]=a[k];break;
                    }
              }
           }
         }   
        printf("RNS:\n");
        for(int i=0;i<n;i++)
        {
           printf("%d ",rs[i]);
        }
         
}      
    return 0;
}        
          
                



