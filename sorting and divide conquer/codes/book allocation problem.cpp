#include<bits/stdc++.h>
using namespace std;
long int arr[100],mini,sum,n,m;
int func(long int sumo){
	long int s=1,currentsum=0;//acttually used the following no. of kids
	for(long int i=0;i<n;i++){
		if(currentsum>sumo)
		  return 0;
		currentsum+=arr[i];
		if(currentsum>sumo)
		{
		     currentsum=arr[i];
			 s++; 			             
		}
			
	}		
	
	if(s==m)
		return 1;//go to right
	else 
	    return 0; //  go to left might be lower answer possible
	
}
int bsearch(long int beg ,long int last){
	long int mid;
	while(beg<last){
		mid=beg+((last-beg)/2);
		if(func(mid)) 
		   last=mid-1;
		else {
			beg=mid+1;
			mini=max(mid,mini); //min(mid,mini);
		} 
	}
	return mid;
}

int main() {
	int t;
	cin>>t;
	while(t){
	  sum=0;//sum of the array
	  mini=0;//INT_MAX;//answer
      cin>>n>>m;
	  for(long int i=0;i<n;i++){
		  cin>>arr[i];
		  sum+=arr[i];
	  }
	  cout<<bsearch(0,sum)+1<<endl;
	  t--;	  
	}
	return 0;
}
