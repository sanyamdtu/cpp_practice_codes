#include<bits/stdc++.h>
using namespace std;
bool recursion(int sol[][10],char A[][10],int m,int n,int i,int j){
	if(i==m-1 && j==n-1){
		sol[i][j]=1;
		for(i=0;i<m;i++){
			for(int j=0;j<n;j++)
		  cout<<sol[i][j]<<" ";
		  cout<<endl;
		}
		cout<<endl;
		return true;
	}
	if(i>m-1 || j>n-1)
	 return false;
	if(A[i][j]=='X')
	 return false;
	sol[i][j]=1;
	bool down;
	bool right=recursion(sol,A,m,n,i,j+1);
	if(!right)
    down=recursion(sol,A,m,n,i+1,j);
    sol[i][j]=0;
	if(right || down)
	 return true;
	else
	 return false;
}
int main(){
	char A[10][10];
	int sol[10][10];
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
            sol[i][j]=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
            cin>>A[i][j];	
   bool a=recursion(sol,A,m,n,0,0);
   if(!a)
   cout<<-1;
   
}
