#include<bits/stdc++.h>
using namespace std;
int count_bits(int n){
    int ans=0;
    while(n){
     ans+=n&1;
     n=n>>1;
    }
    return ans;
}
int count_bits_faster(int n){
    int ans=0;
    while(n){
        n=n&(n-1);
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<count_bits_faster(n);
    cout<<__builtin_popcount(n);
    return 0;
}