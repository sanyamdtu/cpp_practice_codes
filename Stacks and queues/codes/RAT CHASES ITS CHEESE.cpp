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
	if(A[i][j]=='X' || A[i][j]=='1')
	 return false;
	if(i>m-1 || j>n-1 || i<0 || j<0)
	 return false;
	sol[i][j]=1;
	bool right=recursion(sol,A,m,n,i,j+1);
	if(right){
    	return true;
	}
	bool down=recursion(sol,A,m,n,i+1,j);
	if(down){
		return true;
	}
	bool up=recursion(sol,A,m,n,i-1,j);
	if(up){
		return true;
	}
	bool left=recursion(sol,A,m,n,i,j-1);
	if(left){
		return true;
	}
	sol[i][j]=0;
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
   cout<<"NO PATH FOUND";
   return 0;
}
