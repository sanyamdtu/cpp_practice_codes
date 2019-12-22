#include<bits/stdc++.h>
using namespace std;
int flag;
void func(int arr[],int size,int sum,int i,int count){
	if(i>=size){
	 if(sum==0)
      if(count>0)
	   flag=1;
	 return ;
	}
    func(arr,size,sum,i+1,count);
	func(arr,size,sum+arr[i],i+1,count+1);
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
        flag=0;
        func(arr,n,0,0,0);
		(flag==1)?cout<<"Yes":cout<<"No";
		cout<<endl;
	}
	return 0;
}
