#include<bits/stdc++.h> 
using namespace std; 
  
void check(char ch) 
{ 
  
    if (ch >= 'a' && ch <= 'z') 
        cout<<"lowercase"; 
  
    else if (ch >= 'A' && ch <= 'Z') 
    cout<<"UPPERCASE"; 
              
  
    else
        cout<<"Invalid"; 
              
} 
  
// Driver Code 
int main() 
{ 
    char ch; 
    cin>>ch;
    check(ch); 
     
     return 0; 
} 
  
// This code is contributed by Code_Mech 
