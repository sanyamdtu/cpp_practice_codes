#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main() {
	int n,key;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
	 cin>>arr[i];
	 key=arr[0];
	for(int i=1;i<n;i++){
      if(arr[i]<key)
	  { 
		  int j=i;
          while(j>=0 && arr[j]<arr[j-1]){
              swap(arr[j],arr[j-1]);
			  j--;
		  }
	  }
	      else{
		       key=arr[i];
	      }

	}
	
    for(int i=0;i<n;i++)
	 cout<<arr[i]<<endl;
	return 0;
}
