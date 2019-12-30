#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int func(char X[],char Y[]){
    int m=strlen(X);
    int n=strlen(Y);
    dp[0][0]=0;
    for(int i=1;i<m;i++)
     dp[0][i]=0;
    for(int i=0;i<n;i++)
     dp[i][0]=0;
     
}
int main(){
    return 0;
}