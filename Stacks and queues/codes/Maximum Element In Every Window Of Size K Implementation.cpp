#include<bits/stdc++.h>
using namespace std;
void printmax(int *arr,int n,int k){
	deque<int> q;
	int i;
	for(i=0;i<k;i++){
		while(!q.empty() && arr[i]>arr[q.back()])
		q.pop_back();
		q.push_back(i);
	}
	for(;i<n;i++){
		cout<<arr[q.front()]<<" ";
	    while(!q.empty() && q.front()<=i-k)
	     q.pop_front();
		while(!q.empty() && arr[i]>=arr[q.back()])
		q.pop_back();
		q.push_back(i);
	}
	cout<<arr[q.front()]<<" ";
}
int main(){
	int n;
	cin>>n;
	int *arr=new int [n];
	//important
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	printmax(arr,n,k);
	return 0;
}
