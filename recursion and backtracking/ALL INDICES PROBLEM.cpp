#include<bits/stdc++.h>
using namespace std;
int n;
void check(long long int a[],int size,long long int num){
	if(a[0]==num)
		cout<<n-size<<" ";
	if(size==1)
	 return ;
	return check(a+1,size-1,num);
}
int main() {
	cin>>n;
	long long int arr[n],m;
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	cin>>m;
	check(arr,n,m);
	return 0;
}
