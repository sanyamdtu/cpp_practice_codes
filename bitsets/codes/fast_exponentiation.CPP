#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,ans=1;
    cin>>a>>n;
    while(n){
        int last_bit=n&1;
        if(last_bit){
            ans*=a;
        }
            a*=a;
            n=n>>1;            
    }
    cout<<ans;
}