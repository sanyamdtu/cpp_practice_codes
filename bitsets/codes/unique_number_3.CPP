#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
    int cnt[64];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<n;i++){
        int j=0;
        int no=arr[i];
        while(no){
            int last_bit=(no&1);
            cnt[j]+=last_bit;
            no=no>>1;
            j++;
        }
    }
   /* cout<<endl;
    for(int i=0;i<64;i++){
        cout<<cnt[i]<<" ";
    }*/
    int p=1,ans=0;
    for(int i=0;i<64;i++){
        cnt[i]=cnt[i]%3;
        ans=cnt[i]*p+ans;
        p*=2;
    }
    
    cout<<ans;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    func(arr,n);
    return 0;
}