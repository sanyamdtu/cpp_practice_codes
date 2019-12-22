#include<bits/stdc++.h>
using namespace std;
int func(int a[],int n){
    int maxlength1=0,maxlength2=0,maxlength3=0,currentlength1=0,pivot=0,currentlength2=0,currentlength3=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            if(pivot){
                currentlength1++;
                maxlength1=max(maxlength1,currentlength1);
                currentlength1=1;
                pivot=0;
            }
            else
            currentlength1++;
            currentlength2++;
            currentlength3++;
            maxlength3=max(maxlength3,currentlength3);
            currentlength3=1;
        }
        else if(a[i]==a[i+1]){
            currentlength1++;
            currentlength2++;
            currentlength3++;
        }
        else{
            currentlength2++;
            maxlength2=max(maxlength2,currentlength2);
            currentlength2=1;
            currentlength3++;
            pivot=1;
            currentlength1++;
        }

    }
    maxlength1=max(maxlength1,++currentlength1);
    maxlength2=max(maxlength2,++currentlength2);
    maxlength3=max(maxlength3,++currentlength3);
    int ans=max(maxlength1,maxlength2);
    ans=max(ans,maxlength3);
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
         cin>>a[i];
        cout<<func(a,n)<<endl;
    }
	return 0;
}
/*
2
6
12 4 78 90 45 23
4
40 30 20 10
*/
