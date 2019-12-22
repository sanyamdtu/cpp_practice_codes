#include<bits/stdc++.h>
using namespace std;
int main() {
    unsigned int n,f;
    string s;
    cin>>n;
    unsigned int a[1000000];
    memset(a,0,sizeof(a));
    for(unsigned int i=0;i<n;i++){
      cin>>f;
      a[f]++;
    }

    for(unsigned int i=0;i<1000000;i++){
        if(a[i])
        while(a[i]){
            cout<<i<<" ";
            a[i]--;
        }
    }
	return 0;
}
