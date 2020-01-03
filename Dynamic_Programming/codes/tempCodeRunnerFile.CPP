#include<bits/stdc++.h>
using namespace std;
pair<int,vector<char>> dp[1000][1000],q;
pair<int,vector<char>> func(char X[],char Y[]){
    int m=strlen(X);
    int n=strlen(Y);
    dp[0][0].first=0;
    for(int i=1;i<m;i++)
     dp[0][i].first=0;
    for(int i=0;i<n;i++)
     dp[i][0].first=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(X[i-1]==Y[j-1]){
                dp[i-1][j-1].second.push_back(X[i-1]);
                q=dp[i-1][j-1];
                q.first++;
            }
            else{
                if(dp[i-1][j].first>dp[i][j-1].first)
                 q=dp[i-1][j];
                else
                q=dp[i][j-1];                 
            }
            dp[i][j]=q;
        }
    }
    return dp[m][n];
     
}
int main(){
    char input[1000],output[1000];
    cin>>input>>output;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++)
         dp[i][j].first=0;
    }
    q=func(input,output);
    for(int i=0;i<q.second.size();i++)
     cout<<q.second[i];
    return 0;
}