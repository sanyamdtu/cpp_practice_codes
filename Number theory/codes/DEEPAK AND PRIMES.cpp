#include<bits/stdc++.h>
using namespace std;
int arr[5000000];
int main() {
        long int n,count=0;
        cout<<" ssss";
		cin>>n;
		
		cout<<" sss";
		for(long int i=0;i<=5000000;i++)
		 arr[i]=1;
		 cout<<" sss";
		 arr[1]=arr[0]=0;
		for(long int i=2;i<=5000000;i++){
			for(long int j=i*i;j<=5000000;j+=i){
                arr[j]=0;
			}			
		}
		cout<<"sss";
		for(long int i=2;i<=5000000;i++){
			if(arr[i])
			count++;
			if(count==n)
			{
				cout<<i;
				break;
			}
		}		
	

	return 0;
}
