#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int func(int arr[],int totallen){
   if(totallen==0)
    return 0;
   if(dp[totallen]!=-1) 
    return dp[totallen] ;
   int best=0,maxprof;
   for(int len=1;len<=totallen;len++){
    maxprof=arr[len-1]+func(arr,totallen-len);
    best=max(best,maxprof);
   }
   dp[totallen]=best;
   return best;
}
int tabulation(int arr[],int totallen){
    dp[1]=arr[0];
    for(int cuur=2;cuur<=totallen;cuur++){
        int best=0,maxp=0;
        for(int j=1;j<cuur;j++){
            maxp=arr[cuur-j-1]+dp[j];
            best=max(best,maxp);
        }
        dp[cuur]=best;
    }
    return dp[totallen];
}
int main(){
    int arr[20];
    //sanyam 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
     cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<tabulation(arr,n)<<endl;
    for(int i=1;i<=n;i++)
     cout<<dp[i]<<" ";
    return 0;
}