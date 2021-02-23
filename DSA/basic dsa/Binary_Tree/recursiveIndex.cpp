#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int firstIndexGiver(int a[],int size,int x)
{
    if(size==0)
    {
        return -1;
    }
    if(a[0]==x)
    {
        return 0;
    }
    else{
        int index=firstIndexGiver(a+1,size-1,x);
        return (index+1);
    }
}
int lastIndexGiver(int a[],int size,int x)
{
    if(size==0)
    {
        return -1;
    }
    if(a[size-1]==x)
    {
        return (size-1);
    }
    else{
        int index=lastIndexGiver(a,(size-1),x);
        return (index);
    }
}

int main()
{
    int a[]={1,1,3,2,2,3,3};
    int size=7;
    int x=1;
    int result=(lastIndexGiver(a,size,x));
    cout<<"The last index is "<<result;
}