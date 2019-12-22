#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t){
        long int a,n,count=0;
		cin>>a>>n;
		int arr[n];
		for(int i=0;i<=n;i++)
		 arr[i]=1;
		 arr[1]=arr[0]=0;
		for(long int i=2;i<=n;i++){
			for(long int j=i*i;j<=n;j+=i){
                arr[j]=0;
			}			
		}
		for(long int i=a;i<=n;i++){
			if(arr[i])
			count++;
		}
		cout<<count<<endl;		

		t--;
	}

	return 0;
}
