#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    char a[1000];
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(isupper(a[i]))
        cout<<endl<<a[i];
        else
        cout<<a[i];
    }

	return 0;
}
