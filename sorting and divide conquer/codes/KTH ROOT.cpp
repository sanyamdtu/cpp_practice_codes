#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	double n,i;
	int k;
	cin>>t;
	while(t){
        cin>>n;
		cin>>k;
		for(i=1;i<=n;i++){
            if(pow(i,k)>n)
             break;
        }
        cout<<i-1<<endl;
		t--;     
	}
	return 0;
}
