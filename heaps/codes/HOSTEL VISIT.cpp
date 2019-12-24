#include<bits/stdtr1c++.h>
using namespace std;
vector<int> minheap;
 int q,k;
int distance(int x,int y){
    int distance=pow(x,2)+pow(y,2);
    return distance;
}
void minheapify(int cidx,vector<int> &heap){
	if(cidx==0)
	return ;
	int pidx=(cidx-1)/2;
	if(heap[pidx]>heap[cidx]){
		swap(heap[pidx],heap[cidx]);
		minheapify(pidx,heap);
	}
	else
	 return ;
}
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
void insert(int data){
	minheap.push_back(data);
	minheapify(minheap.size()-1,minheap);
}
void inserty(int data){
    if(minheap.size()==0)
     minheap[0]=data;
    else{
        insert(data);
    }
}
int main(){
    cin>>q>>k;
    while(q--){
        int type,x,y;
        cin>>type;
        if(type==1){
            cin>>x>>y;
            int value=distance(x,y);
             inserty(value);
        else{
            
        }
    }
}