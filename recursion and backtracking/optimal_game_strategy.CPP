#include<bits/stdc++.h>
using namespace std;
int func(int i,int j,int arr[],int n){
    if(i>j)
     return 0;
    if(i==j)
     return arr[i];
    int sum1=0,sum2=0,sum3=0,sum4=0;
    sum1=arr[i]+func(i+1,j-1,arr,n);
    sum2=arr[i]+func(i+2,j,arr,n);
    sum3=arr[j]+func(i+1,j-1,arr,n);
    sum4=arr[j]+func(i,j-2,arr,n);
    int q=max(sum1,max(sum2,max(sum3,sum4)));
    if(q==sum1)
     return min(sum1,max(sum2,max(sum3,sum4)));
    if(q==sum2)
     return min(sum2,max(sum1,max(sum3,sum4)));
    if(q==sum3)
     return min(sum3,max(sum2,max(sum1,sum4)));
    else
     return min(sum4,max(sum2,max(sum3,sum1)));
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    cout<<func(0,n-1,arr,n);   
}