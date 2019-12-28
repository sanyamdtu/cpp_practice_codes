#include<bits/stdc++.h>
using namespace std;
class graphs{
    map< int,list<int> > my;
    public:
    graphs(){

    }
    void addedge(int u,int v,bool rev=1){
//        cout<<"Source: "<<u<<" Destination: "<<v<<endl;
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
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;
    
    graphs g;
    for(int i=0;i<36;i++){
        for(int dice=1;dice<=6;dice++){
            int v=i+dice+board[i+dice];
            g.addedge(i,v,0);
        }
    }
    g.sssp(0,36);
    return 0;
}