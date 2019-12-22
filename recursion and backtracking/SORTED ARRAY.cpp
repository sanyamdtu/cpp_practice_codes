#include<bits/stdc++.h>
using namespace std;
bool check(long long int a[],long long int size){
	if(size==1|| size==0)
	 return true;
	else{
		  if(a[size-2]>a[size-1])
		   return false;
		 return check(a,size-1);
	}
}
int main() {
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	 cin>>arr[i];
	(check(arr,n)==true)?cout<<"true":cout<<"false";
	return 0;
}
