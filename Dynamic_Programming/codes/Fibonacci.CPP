#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibonacci(int n){
    if(dp[n]!=-1)
     return dp[n];
    dp[n]=fibonacci(n-1)+fibonacci(n-2);
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<1000;i++)
     dp[i]=-1;
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    cout<<endl;
    cout<<fibonacci(n);
    return 0;
}