#include<bits/stdc++.h>
using namespace std;
string s;
int check(int num,int place,int i){
	if(i==-1)
	 return num;
	num+=pow(10,place)*(s[i]-48);
	return check(num,place+1,i-1);
}
int main() {
	cin>>s;
	cout<<check(0,0,s.length()-1);
	return 0;
}
