#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int func(int i,int j,int arr[],int n){
    if(i>j || i<0 || j<0)
     return 0;
    if(dp[i][j]!=-1)
      return dp[i][j];
    if(i==j){
        dp[i][j]=arr[i];
        return dp[i][j];
    }
    int sum1=0,sum2=0,sum3=0,sum4=0;
    sum1=arr[i]+func(i+1,j-1,arr,n);
    sum2=arr[i]+func(i+2,j,arr,n);
    sum3=arr[j]+func(i+1,j-1,arr,n);
    sum4=arr[j]+func(i,j-2,arr,n);
    int q=max(sum1,max(sum2,max(sum3,sum4)));
    if(q==sum1)
     dp[i][j]=min(sum1,max(sum2,max(sum3,sum4)));
    if(q==sum2)
     dp[i][j]=min(sum2,max(sum1,max(sum3,sum4)));
    if(q==sum3)
     dp[i][j]=min(sum3,max(sum2,max(sum1,sum4)));
    else
      dp[i][j]=min(sum4,max(sum2,max(sum3,sum1)));
    return dp[i][j];
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    dp[0][0]=arr[0];
    cout<<func(0,n-1,arr,n);   
}