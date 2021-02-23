#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of steps";
    cin>>n;
    char data[n];
    cout<<"Enter U for Uphill or D for Downhill";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int d_counter=0, u_counter=0, valley_counter=0;
    for(int i=0;i<n;i++)
    {
        if(data[0]=='D' && i==0){
            valley_counter++;

        }
        if(data[i]=='D'){
            d_counter++;
        }
        else if(data[i]=='U'){
            u_counter++;
        }
        if(u_counter==d_counter && i!=n-1 && data[i+1]=='D'){
            valley_counter++;
        }
    }
 
     cout<<"No. of valleys = "<<valley_counter;
    


    return 0;
}
