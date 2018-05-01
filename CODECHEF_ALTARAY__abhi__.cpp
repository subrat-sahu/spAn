#include <bits/stdc++.h>
using namespace std; 

int main(){
int T; 
cin>>T; 
while(T--){
    int N;
    cin>>N;
    int arr[N]; 
    int i=0; 
    int boool[N];// = {0}; // this is legal only for 0 
    
    //here i rep 0 for negative numbers
    while(i<N){
        cin>>arr[i];
        if(arr[i]>0) boool[i]=1; //if pos number
        else boool[i]=0;
        i++;
    }
    
    int ans[N]; 
    int n=N-1;
    ans[n]=1; 
    
    while(n-->=0){
        if(boool[n]!=boool[n+1]){
            ans[n]=ans[n+1]+1;
        } 
        else ans[n]=1;
        }
    
    for(int i=0; i<N; i++) cout<<ans[i]<<" "; 
    cout<<"\n";
}
return 0;
}