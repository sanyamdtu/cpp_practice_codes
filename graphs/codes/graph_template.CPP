#include<bits/stdc++.h>
using namespace std;
//template<typename T>
class graphs{
    map< string,list<string> > my;
    public:
    graphs(){

    }
    void addedge(string u,string v,bool rev=1){
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
    void bfs(string source){
        queue<string> q;
        map<string,bool> visited;
        q.push(source);
        while(!q.empty()){
            string temp=q.front();
            q.pop();
            if(!visited[temp]){
                cout<<temp<<" "; 
                visited[temp]=1;
                for(auto i: my[temp]){
                    q.push(i);
                }
            }
            visited.insert(pair<string,bool>(temp,1));
        }
    }
    void dfs(string source,map<string,bool> &visited){
        stack<string> q;
        q.push(source);
        while(!q.empty()){
            string temp=q.top();
            q.pop();
            if(!visited[temp]){
                cout<<temp<<" "; 
                visited[temp]=1;
                for(auto i: my[temp]){
                    q.push(i);
                }
            }
            visited.insert(pair<string,bool>(temp,1));
        }
        
    }
    void dfshelper(){
        map<string,bool> visited;
        for(auto i:my){
            for(auto s:i.second){
                if(!visited[s]){
                    dfs(s,visited);
                    cout<<endl;
                }
            }
        }
    } 
    void sssp(string source,string destin){
        pair<string,int> pi,p,temp;
        queue<pair<string,int>> q;
        map<string,bool> visited;
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
                    q.push(pair<string,int>(i,temp.second+1));
                }
            }
            visited.insert(pair<string,bool>(temp.first,1));
        }
    }
};
int main(){
    graphs g;
    g.addedge("sanyam","sarthak");
    g.addedge("sanyam","bittu");
    g.addedge("sarthak","ekkoo");
    g.addedge("ekkoo","shresth");
    g.addedge("shrey","shreyansh");
    g.dfshelper();
    return 0;
}