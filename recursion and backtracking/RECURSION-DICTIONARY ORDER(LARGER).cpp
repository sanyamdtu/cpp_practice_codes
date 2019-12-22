#include<bits/stdc++.h>
using namespace std;
void func(string str,string temp,int i,string ans){
	if(temp.length()==0){
		
		return ;
	}
	while(temp[i]!='\0'){
		ans.push_back(temp[i]);
		temp.erase(temp.begin()+i);
		return string
		i++;
	}
}	

int main(){
	string str;
	cin>>str;
	sort(str.begin(),str.end());
	func(str,str);
}
