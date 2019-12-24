#include<bits/stdc++.h>
using namespace std;
vector< long long int>minheap;
 long long int  q,k;
 long long int distance( long long int x, long long int y){
     long long int distance=pow(x,2)+pow(y,2);
    return distance;
}

void downheap( long long int i,vector< long long int> &arr, long long int n){
 long long int largest = i;  
     long long int l = 2*i + 1; 
	 long long int r = 2*i + 2; 
    if (l < n && arr[l] < arr[largest]) 
        largest = l; 
    if (r < n && arr[r] < arr[largest]) 
        largest = r; 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
        downheap(largest,arr, n); 
    }

}
vector< long long int> arr;
void deletepeek(){
	swap(minheap[0],minheap[minheap.size()-1]);
    arr.push_back(minheap.back());
	minheap.pop_back();
	downheap(0,minheap,minheap.size());	
}

void heapifyoptimised(vector< long long int>  &heap){
	for( long long int i=(heap.size()-1);i>=0;i--)
		downheap(i,heap,heap.size());
 }
 void kth(){
    heapifyoptimised(minheap);
    for( long long int i=0;i<k-1;i++)
      deletepeek();
    cout<<minheap[0]<<endl;
    while(!arr.empty()){
        minheap.push_back(arr.back());
        arr.pop_back();
    }
}
int main(){
    cin>>q>>k;
    while(q--){
        long long int type,x,y;
        cin>>type;
        if(type==1){
            cin>>x>>y;
             long long int value=distance(x,y);
            minheap.push_back(value);
        }
        else{
            kth();
        }
    }
    return 0;
}