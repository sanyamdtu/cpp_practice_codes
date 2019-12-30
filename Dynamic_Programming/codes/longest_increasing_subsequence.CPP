#include<bits/stdc++.h>
using namespace std;
int dp[100],s;
int func(int arr[],int n){
    for(int i=0;i<n;i++)
     dp[i]=1;    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>=arr[j])
                s=1+dp[j];
                dp[i]=max(dp[i],s);
        }
    }
    for(int i=0;i<n;i++)
     cout<<dp[i]<<" ";
    cout<<endl;
    return dp[n-1];
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
     cin>>arr[n];
    cout<<func(arr,n);
     return 0;
}