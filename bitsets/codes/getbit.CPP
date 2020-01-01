#include<bits/stdc++.h>
using namespace std;
int getbits(int n,int i){
    int mask=1<<i;
    return (n&mask)>0?1:0;
}
void setbit(int &n,int i){
    int mask=1<<i;
    n|=mask;
}
void clearbit(int &n,int i){
    int mask=~(1<<i);
    n&=mask;
}
void updatebit(int n,int i,int v){
    int mask=~(1<<i);
    int cleared=n&mask;
    n=(v<<i) | cleared;
}
int clearbits(int n,int i){
    int mask=(-1<<i);
    return mask&n;    
}
int clear_range(int n,int i,int j){
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    return (mask&n);
}
int replacebits(int n,int m,int i,int j){
    int n_=clear_range(n,i,j);
    int mask=(m<<i);
    return (n_|mask);
}
int main(){
    int n=15;
    cout<<replacebits(n,2,1,3);
    return 0;

}