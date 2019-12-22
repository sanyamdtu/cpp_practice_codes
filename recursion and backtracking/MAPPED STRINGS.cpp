#include<bits/stdc++.h>
using namespace std;
char hashmap[27];
void shashmap(char A[]){
	A[0]='/0';
	A[1]='A';
	for(int i=2;i<27;i++){
		A[i]=A[i-1]+1;
	}

int main() {
    string s;
    cin>>s;
    shashmap(hashmap);
    func("/0",0,s);   
	return 0;
}
