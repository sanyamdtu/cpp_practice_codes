#include<bits/stdc++.h>
using namespace std;
string hashmap[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string num;
string searchin [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
    for (int i = 0; i <= N - M; i++) { 
        int j; 
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    }
    return -1; 
} 
void search(string s){
	int flag;
	int j=0;
	while(j<11){
	    int res = isSubstring(s,searchin[j]);
		    if(res>-1){
		        cout<<searchin[j]<<endl;
		    }
		    j++;
    }
}
void func(string a,int i,int j,string num){
   if(i==num.length()){
     search(a);
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

