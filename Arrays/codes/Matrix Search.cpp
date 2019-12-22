#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>a[i][j];
    int num;
    cin>>num;
    int r=n-1,c=0;
    while(r>=0 && c<m)
    {
        if(a[r][c]>num)
            r--;
    
            
        else if(a[r][c]<num)
           c++;
        
        else
        {
            cout<<1;
            break;
        }
    }
    if(r==n || c==m)
    cout<<0;
	return 0;
}
