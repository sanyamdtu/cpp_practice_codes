#include<iostream>
#include<string.h>
using namespace std;
int main() {
     char a[100];
     int count=1;
     cin>>a;
     for(int i=0;a[i]!='\0';)
     {   count=1;
         char temp;
         if(a[i]==a[i+1])
         {    i++;
             temp=a[i];
              while(a[i]==temp)
              {
                  count++;
                   i++;
              }
              cout<<temp<<count;
         } 
         else
         
         {  
             cout<<a[i]<<count; 
             i++;        
         }
     }
    return 0;
}
