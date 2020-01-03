#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int func(int n,int m){
    if(dp[0][0]==-1)
     return 0;
    for(int i=0;i<n;i++){
        if(dp[0][i]==-1)
         break;
        else
        {
            dp[0][i]=1;
        }        
    }
    for(int i=0;i<m;i++){
        if(dp[i][0]==-1)
         break;
        else{
            dp[i][0]=1;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(i==2 && j==1)
            cout<<" jssj";
            if(dp[i][j]==-1);
            else{
                if(dp[i-1][j]!=-1){
                    dp[i][j]+=dp[i-1][j];
                }
                if(dp[i][j-1]!=-1)
                     dp[i][j]+=dp[i][j-1];
            }
        }
        if(dp[n-1][m-1]==-1)
         return 0;
         cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
             cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        return dp[n-1][m-1];
    }
    
}
int main(){
    memset(dp,0,sizeof(dp));
    int m,n,p;
    cin>>m>>n>>p;
    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        dp[x-1][y-1]=-1;
    }
    cout<<func(m,n)<<endl;
    return 0;
}