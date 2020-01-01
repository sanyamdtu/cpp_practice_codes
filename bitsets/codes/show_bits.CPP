#include<bits/stdc++.h>
using namespace std;
int show_bits(int n){
    int ans=0,last_bit=0,p=1;
    while(n){
        last_bit=n&1;
        n=n>>1;
        ans+=last_bit*p;
        p*=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<show_bits(n);
    return 0;
}