#include<bits/stdc++.h>
using namespace std;
bool bfs(int **residualcapacity,int source,int sink,int v,int *parent){
    bool visited[v];
    memset(visited,0,sizeof(visited));
    queue<int> q;
    visited[source]=1;
    q.push(source);
    bool foundagpath=false;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<v;i++){
                if(visited[v]==false && residualcapacity[u][v]>0){
                    parent[v]=u;
                    visited[v]=true;
                    q.push(v);
                    if(v==sink){
                        foundagpath=true;
                        break;
                    }
                }

        }
    }
    return foundagpath; 
}
void printaugpath(vector<vector<int>> augumentedpath){
    for(int i=0;i<augumentedpath.size();i++){
        for(int j=0;j<augumentedpath[i].size();j++){
            cout<<augumentedpath[i][j]<<",";
        }        
        cout<<endl;
    }
}
int maxflow(int **capacity,int source,int sink,int v){
    int **residualcapacity=new int *[v];
    for(int i=0;i<v;i++){
        residualcapacity[i]=new int[v];
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++)
        residualcapacity[i][j]=capacity[i][j];
    }
    int *parent=new int[1000];
    vector<vector<int>> augumentedpath;
    int maxflow=0;
    while(bfs(residualcapacity,source,sink,v,parent)){
        vector<int> currentaugumentedpath;
        int flow=INT_MAX;

        int v=sink;
        while(v!=source){
            currentaugumentedpath.push_back(v);
            int u=parent[v];
            if(flow>residualcapacity[u][v]){
                flow=residualcapacity[u][v];
            }
            v=u;

        }
        currentaugumentedpath.push_back(source);    
        augumentedpath.push_back(currentaugumentedpath);
        reverse(currentaugumentedpath.begin(),currentaugumentedpath.end());
        maxflow+=flow;
        v=sink;
        while(v!=source){
            int u=parent[v];
            residualcapacity[u][v]-=flow;
            residualcapacity[v][u]+=flow;
            v=u;

        }
    }
    printaugpath(augumentedpath);
    return maxflow;
}
int main(){
    int v,e;
    cin>>v>>e;
    int **capacity=new int*[v];
    for(int i=0;i<v;i++)
     capacity[i]=new int[v];
    for(int i=0;i<e;i++){
        int q,v,c;
     cin>>q>>v>>e;
     capacity[q][v]=q;
    }
     
}