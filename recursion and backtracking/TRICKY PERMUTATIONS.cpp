#include<bits/stdc++.h>
using namespace std;
void func(string str,string a,int i){
	if(i==str.length()-1){
		cout<<a<<endl;
		return ;
	}
	if(i==0)
	for(int j=1;j<str.length();j++){
		swap(a[i],a[j]);
	    func(str,a,i+1);
        swap(a[i],a[i+1]);
	    func(str,a,i+1);
	}
}
int main(){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	func(s,s,0);
}
