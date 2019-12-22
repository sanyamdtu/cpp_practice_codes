#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0,sum=0;
	while(s[i]!='\0'){
		if(s[i]=='('){
			sum++;
		}
		else
			sum--;
        i++;
        if(sum<0)
         break;
        //((((cout<<sum<<endl;
	}
	if(sum==0 && s[i]=='\0')
	 cout<<"Yes";
	else
	 cout<<"No";
	 return 0;
}//(())(
