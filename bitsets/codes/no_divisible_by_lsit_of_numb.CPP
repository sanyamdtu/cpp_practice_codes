#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    ll primes[]={2,3,5,7,11,13,17,19};
    while(t--){
        ll n;
        cin>>n;
        ll subsets=(1<<8)-1;
        ll ans=0;
        for(int i=1;i<=subsets;i++){
            ll deno=1ll;
            ll setbits=__builtin_popcount(n);
            for(ll j=0;j<7;j++){
                if(i&(1<<j)){
                    deno=deno*primes[j];
                }
            }
            if(setbits&1){
                ans+=n/deno;
            }
            else{
                ans-=n/deno;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}