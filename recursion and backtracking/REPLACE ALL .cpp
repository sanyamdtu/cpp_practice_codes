#include<bits/stdc++.h>
using namespace std;
void func(string arr,int i){
	if(i==arr.length())
	   return ;
	if(arr[i]=='p')
	 if(arr[i+1]=='i'){
	   cout<<3.14;
	  return func(arr,i+2);
	 }
    cout<<arr[i];
    return func(arr,i+1);
}
int main() {
	int t;
	cin>>t;
	while(t){
		string s;
		cin>>s;
		func(s,0);
		cout<<endl;
		t--;
	}
	
	return 0;
}
