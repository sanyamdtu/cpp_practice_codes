#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int func(int n){
    int n1=INT_MAX,n2,n3;
    n2=n1;
    n3=n1;
    if(dp[n]!=-1)
      return dp[n];
    if(n%3==0)
     n3=func(n/3)+1;      ///memoization solution
    if(n%2==0)
     n2=func(n/2)+1;
    n1=func(n-1)+1;
    dp[n]=min(n1,min(n2,n3));
    return dp[n];
}
int fundp(int n){
    memset(dp,-1,sizeof(dp));
    dp[0]=0;  dp[1]=0;
    dp[2]=1;  dp[3]=1;
    
    for(int i=4;i<=n;i++){
      int n1=INT_MAX,n2,n3;
      n2=n1;
      n3=n1;            ///  dp solution 
      if(i%3==0) n3=dp[i/3]+1;
      if(i%2==0) n2=dp[i/2]+1;
      n1=dp[i-1]+1;
      dp[i]=min(n1,min(n2,n3));
    }
    return dp[n];
}
int main(){
    for(int i=0;i<1000;i++)
     dp[i]=-1;
    dp[1]=0;
    int n;
    cin>>n;
    cout<<fundp(n)<<endl;
    return 0;
}