#include<bits/stdc++.h>
using namespace std;
int dp[100][100],q;
int func(char X[],char Y[]){
    int m=strlen(X);
    int n=strlen(Y);
    dp[0][0]=0;
    for(int i=1;i<m;i++)
     dp[0][i]=0;
    for(int i=0;i<n;i++)
     dp[i][0]=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(X[i]==Y[j]){
                q=1+dp[i-1][j-1];
            }
            else{
                q=max(dp[i-1][j],dp[i][j-1]);
            }
            dp[i][j]=q;
        }
    }
    return dp[m][n];
     
}
int main(){
    char input[100],output[100];
    cin>>input>>output;
    memset(dp,0,sizeof(dp));
    cout<<func(input,output);
    return 0;
}