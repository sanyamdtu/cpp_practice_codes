#include<bits/stdc++.h>
using namespace std;
int n;
void merge(int arr[],int s,int mid,int e){
	int temp[n];
	int i=s,j=mid-1,k=s;
	while(i<=mid && j<=e){
		if(arr[i]<arr[j])
		 temp[k++]=arr[i++];
		else
		 temp[k++]=arr[j++];
	}
	int start,end;  //new variables for 2 nd merging
	(i!=mid)?end=mid:end=e;
	(i!=mid)?start=i:start=j;
	while(start<=end)
	 temp[k++]=arr[start++];
	for(int l=s;l<=e;l++)
	 arr[l]=temp[l];
}

void mergesort(int arr[],int s,int e){
	if(s>=e)
	 return ;
	 int mid=s+((e-s)/2);
	 cout<<mid;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	merge(arr,s,mid,e);
}
int main(){
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	 return 0;
}
