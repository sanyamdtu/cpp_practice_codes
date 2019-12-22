#include<iostream>
using namespace std;

int a1[1000],b[1000];
int  main() {
    int j,i,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    cin>>b[i];
    for(i=n-1,j=m-1;i>=0 && j>=0;i--,j--)
    {
        if(a[i]+b[j]>9)
        a[i-1]+=1;
        a[i]+=b[j];
    }
    temp=j;
    if(a[i]>9)
      {
          b[j]+=1;
      }

    if(n<m)
    {
       for(;j>=0;j--)
       {
          if(b[j]>9)
          b[j-1]+=1;
       }
       if(b[0]>9)
       cout<<"1, ";
       for(i=0;i<temp+1;i++)
       {
           cout<<b[i]%10<<", ";
       }     
       for(i=temp;i<n;i++)
       cout<<a[i]%10<<", ";
    }
    else{
        for(;i>=0;i--)
       {
          if(b[i]>9)
          b[i-1]+=1;
       }
       if(a[0]>9)
       cout<<"1, ";
       for(int i=0;i<n;i++)
       {
           cout<<a[i]%10<<", ";
       }
    }
    cout<<"END";
       return 0;
}
