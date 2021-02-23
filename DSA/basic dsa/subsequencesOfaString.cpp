#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int subSequence(string input , string output[]){
    if(input.empty()){
        output[0]=" ";
        return 1;
    }
    string smallString=input.substr(1);
    int smallLength=subSequence(smallString,output);
    for(int i=0;i<smallLength;i++){
        output[smallLength+i]=input[0]+output[i];
    }
    return 2*smallLength;

}
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    int n=pow(2,str.size());
    string * output=new string[n];
    int count=subSequence(str,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<" ";
    }

    return 0;

}