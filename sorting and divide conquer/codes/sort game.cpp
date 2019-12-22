#include<bits/stdc++.h>
using namespace std;

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
	else if(a.salary==b.salary && lexicographical_compare(a.name,a.name+a1,b.name,b.name+b1))
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
	
	sort(e, e+n, compare_emp);
	
	for(long int i=0;i<n;i++){
		if(e[i].salary>=x){
		cout<<e[i].name<<" ";
		cout<<e[i].salary<<endl;
	    }
    }
	return 0;
}



/* 
4
Eve 78
Bob 99
Suzy 86
Alice 86
*/
