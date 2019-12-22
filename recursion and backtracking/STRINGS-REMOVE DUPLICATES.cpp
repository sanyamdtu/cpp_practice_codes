#include<bits/stdc++.h>
using namespace std;
string s;
void check(int i,char ch){
	if( i>=s.length()){
      return ;
    }
    if(s[i]==ch)
     check(i+1,ch);
    else
        {
		  cout<<s[i];
	   	  check(i+1,s[i]);
	    }   
}
int main() {
	cin>>s;
	check(0,'\0');
	return 0;
}
