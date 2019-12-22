#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[]={0,0,0},n,f;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>f;
		a[f]++;
	}
	for(int i=0;i<3;i++)
	{
		while(a[i]>0){
			cout<<i<<endl;
			a[i]--;
		}
	}
	return 0;
}
