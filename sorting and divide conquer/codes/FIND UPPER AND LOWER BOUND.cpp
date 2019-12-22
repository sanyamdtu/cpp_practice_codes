#include <bits/stdc++.h> 
using namespace std;
int lbinarySearch(long int arr[], int l, int r, long int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x)
        {
            if(arr[mid-1]<x){
                return mid;
            }
            else {
                 return lbinarySearch(arr, l, mid - 1, x); 
            }
        } 
             
        if (arr[mid] > x) 
            return lbinarySearch(arr, l, mid - 1, x); 
        return lbinarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 

//////////

int ubsearch(long int arr[], int l, int r, long int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x){
            
            if(arr[mid+1]>x){
                return mid;
            }
            else{
                 return ubsearch(arr, mid + 1, r, x);
            }
        } 
        if (arr[mid] > x) 
            return ubsearch(arr, l, mid - 1, x); 
        return ubsearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
int main(void) 
{ 
    long int x,n ;
	cin>>n; 
	long int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	int t;
	cin>>t;
	while(t){
        cin>>x;
        cout<<lbinarySearch(arr,0,n-1,x)<<" "<<ubsearch(arr,0,n-1,x)<<endl;
		t--;     
	}
    return 0; 
} 
