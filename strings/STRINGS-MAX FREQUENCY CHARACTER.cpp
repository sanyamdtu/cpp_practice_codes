#include<iostream>
#include<string.h>
using namespace std;
int main() {
     char a[100],mar;
     int count=1,max=1;
     cin>>a;
     mar=a[0];
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
              if(max<count)
              {
                  max=count;
                  mar=temp;
              }
              
         } 
         else
         i++;        
    }
    cout<<mar;
    return 0;
}
