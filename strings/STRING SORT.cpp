#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
int str(string a,string b){
    int i=0;
   while(a[i]!='\0' && b[i]!='\0'){
      if(a[i]<b[i])
        {
        	return 0;
        	break;
		}
	  else if(a[i]==b[i])
	 	    i++;
      else{
      	return 1;
      	break;
	  }
   }
   return a[i]!='\0'? 0:1;
}
void swap(int i, int j){
	char temp[1000];
	strcpy(temp,a[i]);
	strcpy(a[i],a[j]);
	strcpy(a[j],temp);
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(str(a[j],a[j+1]))
            swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++){
    	cout<<a[i];
    	cout<<endl;
	}
 	return 0;
}
