#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,mid,beg=0,last,flag=1;
	cin>>n;
	last=n-1;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	while(flag){
		mid=(beg+last)/2;
		if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
           flag=0;			
		}
		if(arr[mid]>arr[last]){
			beg=mid;
		}
		else if(arr[mid]<arr[beg]){
			last=mid;
		}
		
	}
	cout<<mid;
	return 0;
}
