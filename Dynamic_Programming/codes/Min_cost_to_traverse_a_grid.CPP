#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
void fundp(int m,int n){
    for(int i=1;i<m;i++)
     dp[i][0]+=dp[i-1][0];
    for(int i=1;i<n;i++)          // dp solution
     dp[0][i]+=dp[0][i-1];
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);
        }
    }
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++)
      cout<<dp[i][j]<<" ";
     cout<<endl;
    }
    cout<<dp[m-1][n-1];
}
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      cin>>dp[i][j];
    fundp(m,n);
}