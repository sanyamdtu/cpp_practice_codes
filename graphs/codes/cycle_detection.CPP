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
    
    void dfs(string source){
        stack<string> q;
        map<string,bool> visited;
        map<string,string> parent;
        q.push(source);
        parent.insert(pair<string,string>(source,source));
        while(!q.empty()){
            string temp=q.top();
            q.pop();
            if(visited[temp] && parent[temp]!=){
                cout<<"found";
                break;
            }
            if(!visited[temp]){
                visited[temp]=1;
                for(auto i: my[temp]){
                    q.push(i);
                    parent.insert(pair<string,int>(temp,1));
                }
            }
            visited.insert(pair<string,bool>(temp,1));
        }
        
    }
    
};
int main(){
    graphs g;
    g.addedge("sarthak","shrey");
    g.addedge("sarthak","shresth");
    g.addedge("shresth","sanyam");
    g.addedge("shrey","sanyam");
    g.dfs("sarthak");
    return 0;
}