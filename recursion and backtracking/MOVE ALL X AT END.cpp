#include<bits/stdc++.h>
using namespace std;
void func(string s,int i,int count=0){
	if(i==s.length()){
		while(count--){
		cout<<"x";
	    }
	    return ;
	}
	if(s[i]!='x')
	 cout<<s[i];
	else
	 count++;
	func(s,i+1,count);
}
int main() {
	string str;
	cin>>str;
	func(str,0);
	return 0;
}
