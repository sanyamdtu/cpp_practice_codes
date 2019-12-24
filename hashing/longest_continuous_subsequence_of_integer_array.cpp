#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int map[maxi-mini+1];
    memset(map,0,sizeof(map));
    for(int i=0;i<n;i++){
        map[arr[i]-mini]++;
    }
    int clen=0,mlen=0;
    for(int i=0;i<maxi-mini+1;i++){
        if(map[i]!=0){
            clen++;
        }
        else{
            mlen=max(mlen,clen);
            clen=0;
        }
    }
    cout<<mlen;
    return 0;
}