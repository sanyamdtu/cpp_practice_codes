#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	return (a>b)?a:b;
}
int main() {
    string s;
    long int n,maxa=0,maxb=0,ca=0,cb=0,currenta=0,currentb=0;
    cin>>n;
	cin>>s;
    for(long int i=0;s[i]!='\0';i++){
        if(s[i]=='a'){
            ca++;// for b prime
            currenta++;//where a is prime
            if(ca>n){
                maxb=max(maxb,currentb);
                currentb=0;
                ca=0;//if b is prime
            }  
            else 
			 currentb++;//for updating the value b prime
	    }
        else {
        	cb++;
        	currentb++;
        	if(cb>n){
        		maxa=max(maxa,currenta);
        		currenta=0;
        		cb=0;//for a prime
        		;
			}
		    else 
		        currenta++;//for updating the value when a prime
		}
		maxb=max(maxb,currentb);
        maxa=max(maxa,currenta);
		}

	cout<<max(maxa,maxb);
	return 0;
}
