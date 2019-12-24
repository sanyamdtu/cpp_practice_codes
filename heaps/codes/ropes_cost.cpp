#include<bits/stdc++.h>
using namespace std;
vector<int> minheap;
int cost=0,len=0;
void minheapify(int cidx,vector<int> &heap){
	if(cidx==0)
	return ;
	int pidx=(cidx-1)/2;
	//while(maxheap[pidx]<maxheap[cidx] && cidx!=0)
	if(heap[pidx]>heap[cidx]){
		swap(heap[pidx],heap[cidx]);
		minheapify(pidx,heap);
	}
	else
	 return ;
}
void insert(int data){
	minheap.push_back(data);
	minheapify(minheap.size()-1,minheap);
}
void downheap(int i,vector<int> &arr,int n){
int largest = i;  
    int l = 2*i + 1; 
	int r = 2*i + 2; 
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

void deletepeek(){
	cost+=minheap[0]+len;
	cout<<endl<<cost<<endl;
	swap(minheap[0],minheap[minheap.size()-1]);
	for(int i=0;i<minheap.size();i++)
	cout<<minheap[i]<<" ";
	cout<<endl;
	len+=minheap[0];
    minheap.pop_back();
	downheap(0,minheap,minheap.size());	
}
int main(){
	int n;
	cin>>n;
	int value;
	for(int i=0;i<n;i++){
	 cin>>value;
	 insert(value);
	}
	for(int i=0;i<n;i++)
	cout<<minheap[i]<<"  ";
    for(int i=0;i<n;i++){
      deletepeek();
    }
    cout<<cost;
	return 0;
}
