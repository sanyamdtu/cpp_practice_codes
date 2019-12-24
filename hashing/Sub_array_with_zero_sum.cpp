#include<bits/stdc++.h>
using namespace std;
map<int,int> mymap;
int maxi=0;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int p[n];
    p[0]=arr[0];
    for(int i=1;i<n;i++){
     p[i]=p[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        if(p[i]==0 || mymap.find(p[i])!=mymap.end()){
            if(p[i]==0)
             maxi=max(maxi,i+1);
            else{   
              maxi=max(maxi,i-mymap[p[i]]);
            } 
        }
        else{
            mymap[p[i]] = i+1;
        }
    }
    cout<<maxi; 
    return 0;
}