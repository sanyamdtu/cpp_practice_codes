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
	int x;
    cin>>x;
    if(arr[0]>x){
        beg=mid+1;
        last=n-1;
    }
    else{
        beg=0;
        last=mid-1;
    }
    flag=-1;
    while(beg<=last){
        mid=(beg+last)/2;
        if(arr[mid]>x)
          last=mid-1;
        else if(arr[mid]==x){
            flag=mid;;
            break;
        }
        else{
            beg=mid+1;
        }
    }
    cout<<flag;
	return 0;
}
