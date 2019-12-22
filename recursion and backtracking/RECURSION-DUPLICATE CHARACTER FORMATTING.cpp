#include<bits/stdc++.h>
using namespace std;
string s;
void check(int i){
	if(i==s.length()-1){
        cout<<s[i];
        return ;
    }
    cout<<s[i];
    if(s[i]==s[i+1])
     cout<<"*";   
    check(i+1);
}
int main() {
	cin>>s;
	check(0);
	return 0;
}
