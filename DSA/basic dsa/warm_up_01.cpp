#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
vector<int> v1;
int n;int ele;
cout<<"Enter the number of elements";
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"Enter the sock value"<<endl;
    cin>>ele;
    v1.push_back(ele);
}
int pairs=0,i=0;
while(i<v1.size())
{
    int count=0;
    for(int j=0;j<v1.size();j++)
    {
        if(j<i && v1[i]==v1[j]){
            break;
        }
        if(v1[j]==v1[i])
        {
            count++;
        }
    }
    pairs=pairs+((count)/2);
    i++;

}
cout<<"Pairs available:"<<pairs;
return 0;
}