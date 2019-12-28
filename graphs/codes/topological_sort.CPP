//not working
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
    void dfs(string source,map<string,bool> &visited,list<string> &ordering){
        stack<string> q;
        q.push(source);
        while(!q.empty()){
            string temp=q.top();
            q.pop();
            if(!visited[temp]){
                ordering.push_back(temp); 
                visited[temp]=1;
                for(auto i: my[temp]){
                    q.push(i);
                }
            }
            visited.insert(pair<string,bool>(temp,1));
        }
        
    }
    void dfstopologicalsort(){
        map<string,bool> visited;
        list<string> order;
        for(auto i:my){
            for(auto s:i.second)
               dfs(s,visited,order);
        }
        for(auto i:order){
            cout<<i<<"->";
        }
    }
};
int main(){
    graphs g;
    g.addedge("English","Programming logic",0);
    g.addedge("Maths","Programming logic",0);
    g.addedge("Programming logic","HTML",0);
    g.addedge("Programming logic","Java",0);
    g.addedge("Programming logic","Python",0);
    g.addedge("Programming logic","JS",0);
    g.addedge("Python","Web Dev",0);
    g.addedge("HTML","CSS",0);
    g.addedge("CSS","JS",0);
    g.addedge("JS","Web Dev",0);
    g.addedge("Java","Web Dev",0);
    g.addedge("Python","Web Dev",0);
    g.dfstopologicalsort();
    return 0;
}