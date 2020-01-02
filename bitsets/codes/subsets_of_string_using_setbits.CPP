#include<bits/stdc++.h>
using namespace std;
void filterchars(int n,char a[]){
    int j=0;
    while(n){
        int last_bit=n&1;
        if(last_bit){
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}
void createsubsequence(char a[]){
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++){
        filterchars(i,a);        
    }
}
int main(){
    char a[100];
    cin>>a;
    createsubsequence(a);
    return 0;
}