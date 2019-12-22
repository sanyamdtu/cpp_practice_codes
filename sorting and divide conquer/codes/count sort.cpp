#include<bits/stdc++.h>
using namespace std;
int main() {
    unsigned int n,f;
    string s;
    cout<<"hello";
    getline(cin,s);
	cin>>n;
    unsigned int a[10000];
    cout<<endl<<"hello";
    memset(a,0,sizeof(a));
    cout<<endl<<"hello";
    for(unsigned int i=0;i<n;i++){
      cin>>f;
      a[f]++;
    }

    for(unsigned int i=0;i<10000;i++){
        if(a[i])
        while(a[i]){
            cout<<i<<" ";
            a[i]--;
        }
    }
	return 0;
}
