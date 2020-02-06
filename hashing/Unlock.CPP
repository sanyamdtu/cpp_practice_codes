#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int arr[n];
    map<long long int,long long int> s;
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(pair<long long int,long long int>(arr[i],i));
    }   
    for(long long int i=0;i<k && i<n;i++){
        /*
        auto maxi=*temp;        
        s.erase(maxi.first);
        pair<long long int,long long int> mini=*s.begin();
        s.erase(mini.first);
        swap(arr[maxi.second],arr[mini.second]); 
        cout<<endl;
        */
        auto temp=s.begin();
        for(auto i=s.begin();i!=s.end();i++){
          temp=i;        
        }
        if((*temp).first+(*temp).second==n)
         k++;
        s[arr[n-(*temp).first]]=(*temp).second;
        swap(arr[(*temp).second],arr[n-(*temp).first]);
        s.erase((*temp).first);

    }     
    cout<<endl;
    for(long long int i=0;i<n;i++)
         cout<<arr[i]<<" ";
    return 0;
}
/*
5 2
3 4 1 2 5
*/