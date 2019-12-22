#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(int i,int j){
	if(i<j){
       return 1;
	}
	else if(i==j)
	 return 2;
	return solve(i-1,j)+solve(i-j,j);
}
int main() {
	int t;
	cin>>t;
	while(t){
        int n,m;
		cin>>n>>m;
		cout<<solve(n,m)%1000000007<<endl;
		t--;
	}
	return 0;
}
