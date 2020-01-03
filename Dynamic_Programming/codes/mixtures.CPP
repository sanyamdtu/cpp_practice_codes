#include<bits/stdc++.h>
using namespace std;
int a[1000];
int dp[1000][1000];
long long int sum(int s,int e){
    long long int ans=0;
    for(int i=s;i<=e;i++){
        ans+=a[i];
        ans%=100;
    }
    return ans;
}
long long int sol(int i,int j,int n){
    if(i>=j)
    return 0;
    if(dp[i][j]!=-1)
     return dp[i][j];
        
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    
    return 0;
}