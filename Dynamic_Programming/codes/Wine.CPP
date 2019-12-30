#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int fun(deque<int> arr,int n){
    //git push              
    for(int i=0;i<n;i++)     
      dp[i][i]=arr[i]*n;
    int year=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    while(year){
        for(int i=0,j=n-year;i<year;i++,j++){
              dp[i][j]=max((year*arr[i]+dp[i+1][j]),(year*arr[j])+dp[i][j-1]);
              cout<<dp[i][j]<<" " ;
          }
        year--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}
int main(){
    memset(dp,0,sizeof(dp));
    deque<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    cout<<endl<<fun(arr,n);
    return 0;
}