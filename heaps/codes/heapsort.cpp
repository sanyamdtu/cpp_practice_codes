#include<bits/stdc++.h>
using namespace std;
void downheap(int i,vector<int> &arr,int n){
int largest = i;  
    int l = 2*i + 1; 
	int r = 2*i + 2; 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
        downheap(largest,arr, n); 
    }

}


void heapifyoptimised(vector<int> &heap){
	for(int i=(heap.size()-1)/2;i>=0;i--)
		downheap(i,heap,heap.size());
 }
void deletemax(vector<int> &heap,int size){
	swap(heap[0],heap[size-1]);
	cout<<heap[size-1]<<endl;;
	downheap(0,heap,size-1);	
}
void heapsort(vector<int> &arr){
	heapifyoptimised(arr);
	for(int i=arr.size();i>0;i--){
		deletemax(arr,i);
		for(int i=0;i<arr.size();i++)
	    cout<<arr[i]<<" ";
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	heapsort(arr);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	return 0;
}
//11
//100 40 435 2 9 20 10 20 35 38 45