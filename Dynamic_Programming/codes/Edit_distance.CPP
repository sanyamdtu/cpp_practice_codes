#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int func(char input[],char output[]){
    dp[0][0]=0;
    int m=strlen(input);
    int n=strlen(output);
    for(int i=1;i<=n;i++)
       dp[0][i]=1+dp[0][i-1];
    for(int j=1;j<=m;j++)
       dp[j][0]=dp[j-1][0]+1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int q1=dp[i-1][j-1];
            int q2=dp[i-1][j];
            int q3=dp[i][j-1];
            dp[i][j]=min(q1,min(q2,q3))+(input[i-1]!=output[j-1]);
        }
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++)
          cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    return dp[m][n];

}
int main(){
    char input[100],output[100];
    cin>>input>>output;
    cout<<func(input,output);
    return 0;
}