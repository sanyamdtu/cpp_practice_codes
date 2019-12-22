#include<bits/stdc++.h>
using namespace std;
long int gcd(long int p,long int q){
  if(q==0)
   return p;
  else{
	 return gcd(q,p%q);
  }

}
int main() {
	long int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
