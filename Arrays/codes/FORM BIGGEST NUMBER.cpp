#include<iostream>
using namespace std;
int reversDigits(long int num) 
{ 
    long int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
int check(long int a,long int b)
{   
    long int temp1=a,temp2=b;
    a=reversDigits(a);
    b=reversDigits(b);
    while(a>0 && b>0)
    {   
        if(a%10>b%10)
            return 1;
        else if(a%10<b%10)
          return 0;
        else{
            a=a/10;
            b=b/10;
   		 }  
	}


            if(a>0)
            {   
            temp2=reversDigits(temp2);
            if((a%10)>(temp2%10))
            return 1;
            else
            return 0;
            }
            else
            {  
            temp1=reversDigits(temp1);
            if(b%10>temp1%10)
            return 0;
            else 
            return 1;
             }       
        

    
}
int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        long int a[n],temp;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                //if(a[j]<a[j+1])
                if(check(a[j],a[j+1])==0)
                {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp; 
                }
            }
        }
        for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
        t--;
    }
	return 0;
}
