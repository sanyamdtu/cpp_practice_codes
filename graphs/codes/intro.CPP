#include<bits/stdc++.h>
using namespace std;
class graphs{
    int V;
    list<int> *arr; 
    public:
    graphs(int v){
        V=v;
        arr=new list<int>[v]; 
    }
    void addedge(int u,int v,bool edge=1){
        arr[u].push_back(v);
        if(edge){
            arr[v].push_back(u);
        }

    }
    void printadd(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int vertex: arr[i]){
                cout<<vertex<<" , ";
            }
            cout<<endl;
        }
    }
    
};
int main(){
    graphs g(5);
    g.addedge(0,1);
    g.addedge(1,4);
    g.addedge(0,4);
    g.addedge(4,3,0);
    g.addedge(1,2);
    g.addedge(2,3,0);
    g.printadd();
    return 0;
}