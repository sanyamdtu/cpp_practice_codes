#include<bits/stdc++.h>
using namespace std;
class graphs{
    map< int,list<int> > my;
    public:
    graphs(){

    }
    void addedge(int u,int v,bool rev=1){
        my[u].push_back(v);
        if(rev){
            my[v].push_back(u);
        }
    }
    void print(){
        for(auto i: my){
            cout<<i.first<<"-> ";
            for(auto s:i.second){
                cout<<s<<",";
            }
            cout<<endl;
        }
    }
    void bfs(int source){
        queue<int> q;
        map<int,bool> visited;
        q.push(source);
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            if(!visited[temp]){
                cout<<temp<<" "; 
                visited[temp]=1;
                for(auto i: my[temp]){
                    q.push(i);
                }
            }
            visited.insert(pair<int,bool>(temp,1));
        }
    }
    void dfs(int source){
        stack<int> q;
        map<int,bool> visited;
        q.push(source);
        while(!q.empty()){
            int temp=q.top();
            q.pop();
            if(!visited[temp]){
                cout<<temp<<" "; 
                visited[temp]=1;
                for(auto i: my[temp]){
                    q.push(i);
                }
            }
            visited.insert(pair<int,bool>(temp,1));
        }
    }
    void sssp(int source,int destin){
        pair<int,int> pi,p,temp;
        queue<pair<int,int>> q;
        map<int,bool> visited;
        p.first=source;
        p.second=0;
        q.push(p);
        while(!q.empty()){
            temp=q.front();
            q.pop();
            if(!visited[temp.first]){
                if(destin==temp.first){
                    cout<<temp.second;
                }
                visited[temp.first]=1;
                for(auto i: my[temp.first]){
                    q.push(pair<int,int>(i,temp.second+1));
                }
            }
            visited.insert(pair<int,bool>(temp.first,1));
        }
    }
};
int main(){
    graphs g;
    for(int i=1;i<=36;i++){
        g.addedge(i,i+1,0);
    }
    g.addedge(34,12,0);
    g.addedge(32,30,0);
    g.addedge(24,16,0);
    g.addedge(17,4,0);
    g.addedge(20,6,0);
    g.addedge(2,15,0);
    g.addedge(5,7,0);
    g.addedge(9,27,0);
    g.addedge(18.29,0);
    g.addedge(25,35,0);
    return 0;
}