#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of clouds"<<endl;
    cin>>n;
    int clouds[n];
    cout<<"Enter the clouds(0 or 1)"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>clouds[i];
    }
    int minStep=0;
    vector<int> danger;
    int k=0;
    while(k<n){
        if(clouds[k]==1){
          danger.push_back(k);
        }
        k++;
    }
    int i=0,j=0;
    while(i!=n-1){
       int miner_01=0,miner_02=0;
        for( j=0;j<danger.size();j++){
            if(i+1==danger[j]){
                miner_01++;break;
            }
            else if(i+2==danger[j]){
                miner_02++;break;
            }
        }
        if(miner_01==0 && miner_02==0){
            i+=2;
            minStep++;

        }
        else if(miner_01==0  && miner_02!=0){
            i++;
             minStep++;

        }
        else if(miner_02==0  && miner_01!=0){
            i+=2;
             minStep++;

        }
    }
    cout<<"Number of minimum steps:"<<minStep;
    


return 0;
}