#include<bits/stdc++.h>
using namespace std;
int lex(string a,string b){
    int i=0;
    while(a[i]!='\0' && b[i]!='\0'){
    if(a[i]<b[i])
        {
        	return 1;
        	break;
		}
    else if(a[i]==b[i])
	 	    i++;
    else{
      	return 0;
      	break;
	  }
   }
   return a[i]!='\0'? 1:0;
}
 struct emp{
        int salary;
		char name[100];
	}e[100000];

void swap(emp p,emp q){
	emp temp=p;
	p=q;
	q=temp;
	
}

bool compare_emp(emp a, emp b){
    int a1=strlen(a.name);
	int b1=strlen(b.name);
	if(a.salary > b.salary)
		return true;
	else if(a.salary==b.salary && lex(a.name,b.name))
		return true;
	
	return false;	
}

int main() {
	long int n;
	int x;
	cin>>x;//salary to correspondent limit
	cin>>n;//number of employees
   
	for(long int i=0;i<n;i++){
		cin>>e[i].name;
		cin>>e[i].salary;
	}
	sort(e,e+n,compare_emp);
	for(long int i=0;i<n;i++){
		if(e[i].salary>=x){
		cout<<e[i].name<<" ";
		cout<<e[i].salary<<endl;
	    }
    }
	return 0;
}
