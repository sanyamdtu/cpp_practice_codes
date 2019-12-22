#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int a[n],b[n],c[2*n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    int i=0,j=0,k=0;
    while(i<n && j<n)
    {
      if(a[i]<=b[j])
      {
          c[k]=a[i];
          k++;
          i++;
      }
      else 
      {
          c[k]=b[j];
          k++;
          j++;
      }
    }
    if(i<n)
    {
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    else if(j<n)
    {
        while(j<n)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }

    cout<<c[n-1];

	return 0;
}
