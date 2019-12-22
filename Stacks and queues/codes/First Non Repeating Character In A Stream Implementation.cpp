#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    queue<char> q;
    char hash[27];
    memset( hash,0,27);
    int i=0;
    while(s[i]!='\0'){
        int index=s[i]-'a'+1;
        hash[index]++;
        q.push(s[i]);
        int flag=0;//for retrurning -1;
        while(flag==0 && !q.empty()){
        	index=q.front()-'a';
            if(hash[index+1]==1){
                cout<<q.front();
                flag=1;
            }
            else{
                q.pop();
            }           
        }
        if(q.empty())
         cout<<-1;
         i++;
    }
    return 0;
}
