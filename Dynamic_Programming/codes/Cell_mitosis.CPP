#include<bits/stdc++.h>
using namespace std;
int solve(int n,int x,int y,int z){
    int dp[1000];
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<n;i++){
        if(i%2==0){
            int q1=dp[i/2]+x;
            int q2=dp[i-1]+y;
            dp[i]=min(q1,q2);
        } 
        else{
            int q1=dp[i-1]+y;
            int q2=dp[(i+1)/2]+x+z;
            dp[i]=min(q1,q2);
        }
    }
    for(int i=0;i<=n;i++)
     cout<<dp[i]<<" ";
    return dp[n];
}
int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    cout<<solve(n,x,y,z);
}