#include<bits/stdc++.h>
using namespace std;
int n;
int check(long long int a[],int size,long long int num,int index){
	if(a[0]==num)
		 index=n-size;
	if(size==1)
	 return index;
	return check(a+1,size-1,num,index);
}
int main() {
	cin>>n;
	long long int arr[n],m;
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	cin>>m;
	cout<<check(arr,n,m,-1);
	return 0;
}
