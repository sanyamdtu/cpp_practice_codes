#include<bits/stdc++.h>
using namespace std;
string hashmap[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string num;
void func(string a,int i,int j,string num){
   if(i==num.length()){
     cout<<a<<endl;
     return ;
    }
    int digit=num[i]-'0';
	if(j==0)
	while(hashmap[digit][j]!='\0'){
		a.push_back(hashmap[digit][j]);
		func(a,i+1,0,num);
		a.pop_back();
		j++;
	}    
}
int main() {
	cin>>num;
	func("\0",0,0,num);
	return 0;
}
