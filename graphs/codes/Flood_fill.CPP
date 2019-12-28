#include<bits/stdc++.h>
using namespace std;
int r,c;
char input[15][50];
int dx[]={0,1,-1,0 };
int dy[]={1,0,0,-1};
void flood_Fill(int i,int j,char ch,char color){
    if(i<0 || j<0 || i>=r || j>=c)
     return;
    if(input[i][j]!='2')
     return ;
    input[i][j]=color;
    for(int k=0;k<4;k++)
     flood_Fill(i+dx[k],j+dy[k],ch,color);
}
int main(){
    cin>>r>>c;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>input[i][j];
        cout<<endl;
    flood_Fill(4,4,'2','3');
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<input[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
/*
1 1 1 1 1 1 1 1
1 1, 1, 1, 1, 1, 0, 0 
1, 0, 0, 1, 1, 0, 1, 1 
1, 2, 2, 2, 2, 0, 1, 0 
1, 1, 1, 2, 2, 0, 1, 0 
1, 1, 1, 2, 2, 2, 2, 0 
1, 1, 1, 1, 1, 2, 1, 1 
1, 1, 1, 1, 1, 2, 2, 1 
*/