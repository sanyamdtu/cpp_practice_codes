#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main(){
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            if(s.empty()){
                cout<<"No Code"<<endl;
            }
            else{
                cout<<s.top()<<endl;
                s.pop();
            }
        }
          else{
            int num;
            cin>>num;
            s.push(num);
        }
    }
}
