#include<bits/stdc++.h> 
using namespace std; 
  
void check(char ch) 
{ 
  
    if (ch >= 'A' && ch <= 'Z') 
        cout<<"U"; 
  
    else if (ch >= 'a' && ch <= 'z') 
    cout<<"L";
              
  
    else
        cout<<"I"; 
              
} 
  
// Driver Code 
int main() 
{ 
    char ch; 
     cin>>ch;
    // Check the character 
    check(ch); 
  
    return 0; 
} 
  
// This code is contributed by Code_Mech 
