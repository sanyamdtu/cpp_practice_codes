#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	  	int flag=-1;
	  	for(int j=(i+1)%n;j!=i && flag==-1;j=(j+1)%n){
	  		if(arr[i]<arr[j]){
	  			flag=arr[j];
			  }
			  //cout<<j<<"jvaluse for i= "<<i<<endl;
		  }
	  	cout<<flag<<" ";
    }
    return 0;
}
