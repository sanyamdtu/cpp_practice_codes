#include<bits/stdc++.h>
using namespace std;
int mini(string str,string pat){
    int st=str.size();
    int patt=pat.size();
    if(st<patt){
        cout<<"No Window";
        return 0;
    }
    int hash_str[256]={0};
    int hash_patt[256]={0};
    for(int i=0;i<patt;i++){
        hash_patt[pat[i]]+=1;
    }
    int start=0,start_idx=-1,min_length=INT_MAX;
    int count=0;
    for(int i=0;i<st;i++){  
        hash_str[str[i]]++;
        if(hash_patt[str[i]]!=0 && hash_str[str[i]]<=hash_patt[str[i]])
          count++;
        if(count==st){
            while(hash_str[str[start]]>hash_patt[str[start]] || hash_patt[str[start]]==0){
                if(hash_str[str[start]]>hash_patt[str[start]])
                hash_str[str[start]]--;
                start++;
            }
        }    
        if(min_length>(i-start+1)){
            min_length=i-start+1; 
            start_idx=start;
        }
    }
    if(start_idx==-1)
     return -1;
    return min_length;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<mini(s1,s2);
	return 0;
}