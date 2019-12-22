#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int a,b,c,ans=1;
	cin>>a>>b>>c;
    for(int i=0;i<b;i++){
    	ans*=a;
    	ans=ans%c;    	
	}
    cout<<ans;
	return 0;
}
