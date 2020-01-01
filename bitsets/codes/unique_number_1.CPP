#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int no,ans=0;
    for(int i=0;i<n;i++){
        cin>>no;
        ans^=no;
    }
    cout<<ans;
    return 0;
}