#include<iostream>
using namespace std;
int main() {
    char a[1000];
    cin>>a;
    int i,temp;
    for(i=0;a[i+1]!='\0';i++)
    {
      temp=a[i+1]-a[i];
      cout<<a[i]<<temp;
    }
    cout<<a[i];
	return 0;
}
