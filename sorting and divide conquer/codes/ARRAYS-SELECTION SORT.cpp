#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	long long int a[n],max;
	for(int i=0;i<n;i++)
     cin>>a[i];
	 for(int i=0;i<n;i++){
		 max=0;
		 for(int j=0;j<n-i;j++){
			 
             if(a[j]>a[max])
			 max=j;
		 }
         swap(a[n-1-i],a[max]);
	 }
	for(int i=0;i<n;i++)
	 cout<<a[i]<<endl;
	return 0;
}
