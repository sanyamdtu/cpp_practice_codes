#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
    int Xor=0;
    for(int i=0;i<n;i++){
        Xor=Xor^arr[i];
    }
    int temp=Xor,pos=0;
    while(temp&1!=1){
        pos++;
        temp=temp>>1;
    }
    int mask=1<<pos;
    int x=Xor,y=0;
    for(int i=0;i<n;i++){
        if(mask & arr[i])
         x=x^arr[i];
    }
    y=x^Xor;
    cout<<min(x,y)<<" "<<max(x,y);
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