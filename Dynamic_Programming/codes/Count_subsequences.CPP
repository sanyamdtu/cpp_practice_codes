#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int c=0;
string s;
int dp[10000][10000];
int func(string a,int i){
	if(i>=s.length()){
		++;
	}
    if(dp[i])
     return dp[i];
    func(a,i+1);
    a.push_back(s[i]);
    func(a,i+1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        cin>>s;
        func("\0",0);
        cout<<endl<<c;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin>>s;
	func("\0",0);
    cout<<endl<<c;
	return 0;
}

*/