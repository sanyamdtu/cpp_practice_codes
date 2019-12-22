//implementation of heap
#include<bits/stdc++.h>
using namespace std;
vector<int> maxheap;
void maxheapify(int cidx,vector<int> &heap){
	if(cidx==0)
	return ;
	int pidx=(cidx-1)/2;
	//while(maxheap[pidx]<maxheap[cidx] && cidx!=0)
	if(heap[pidx]<heap[cidx]){
		swap(heap[pidx],heap[cidx]);
		maxheapify(pidx,heap);
	}
	else
	 return ;
}

void downheapify(int pidx,vector<int> &heap){
	int lidx=pidx*2+1;
	int ridx=pidx*2+2;
	if(lidx>=heap.size() && ridx>=heap.size())
		return ;
	if(lidx<=heap.size()-1 && ridx>=heap.size()){
		if(heap[pidx]<heap[lidx]){
			swap(heap[pidx],heap[lidx]);
		}
		downheapify(lidx,heap);
	}
	if(lidx>heap.size()-1 && ridx<=heap.size()-1){
		if(heap[pidx]<heap[ridx]){
			swap(heap[pidx],heap[ridx]);
		}
		downheapify(ridx,heap);
	}
	else{
		if(heap[lidx]>heap[pidx] || heap[ridx]>heap[pidx]){
			if(heap[lidx]>heap[ridx]){
				swap(heap[lidx],heap[pidx]);
				downheapify(lidx,heap);
			}
			else{
				swap(heap[pidx],heap[ridx]);
				downheapify(ridx,heap);				
			}
		}
		else{
			return ;
		}
	}
}
void heapify(vector<int> &arr){
	for(int i=0;i<arr.size();i++)
	 maxheapify(i,arr);
}
void heapifyoptimised(vector<int> &heap){
	for(int i=heap.size()-1;i>=0;i--)
		downheapify(i,heap);
}
void insert(int data){
	maxheap.push_back(data);
	maxheapify(maxheap.size()-1,maxheap);
}
void deletepeek(){
	swap(maxheap[0],maxheap[maxheap.size()-1]);
	maxheap.pop_back();
	downheapify(0,maxheap);	
}
int main(){
	int n;
	cin>>n;
	int value;
	for(int i=0;i<n;i++){
	 cin>>value;
	 insert(value);
	}
	cout<<"ok1";
	for(int i=0;i<maxheap.size()-1;i++)
	 cout<<maxheap[i]<<" ";	
	deletepeek();
	cout<<endl;
	for(int i=0;i<=maxheap.size()-1;i++)
	 cout<<maxheap[i]<<" ";
	return 0;

	/*int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	heapifyoptimised(arr);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}*/
	return 0;
}
/*

11
100 40 435 2 9 20 10 20 35 38 45
*/

