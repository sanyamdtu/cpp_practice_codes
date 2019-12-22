#include<bits/stdc++.h>
using namespace std;
string s;
int c=0;
void func(string a,int i){
	if(i>=s.length()){
		cout<<a<<" ";
        c++;
        return ;
	}
    func(a,i+1);
    a.push_back(s[i]);
    func(a,i+1);
}
int main() {
	cin>>s;
	func("\0",0);
    cout<<endl<<c;
	return 0;
}
