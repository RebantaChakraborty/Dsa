#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
void display(int n, int c,vector<string>&output ){
    int counter=0;
    while(n>0){
        int r=n%10;
        counter++;
        n=n/10;
    }
    for(int i=0;i<output.size();i++){
        if(counter==1){
            cout<<output[i]<<" ";
        }
        else{
            if(output[i].size()>1){
                cout<<output[i]<<" ";
                
            }

        }
    }
}
int keypadStrokes(int n , string characters[],vector<string>&output){
    if(n==0){
        output.push_back("");
        return output.size();
    }
    int r=n%10;
    n=n/10;
    int l=keypadStrokes(n,characters,output);
    int i=0;
    while(i<=l-1){
        int j=0;
        while(j<=characters[r-2].size()-1){
        output.push_back(output[i]+characters[r-2].substr(j,1)); 
           j++;
        }
        i++;
    }
    
    return output.size();
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
   
    string characters[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>output;
    int c=keypadStrokes(n,characters,output);
    display(n,c,output);
   
    return 0;
    
}