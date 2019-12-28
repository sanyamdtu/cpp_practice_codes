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
    void topologicalsort(){
        map<string,int> indegree;
        queue<string> q;
        for(auto t:my){
            string temp=t.first;
            indegree[temp]=0;
        }
        for(auto i:my){
            for(auto s:i.second){
                indegree[s]++;
            }
        }
        for(auto i:indegree)
            if(i.second==0){
                q.push(i.first);
            }
                
        while(!q.empty()){
            string temp=q.front();
            cout<<temp<<"->";
            q.pop();
            for(auto i:my[temp]){
                    indegree[i]--;
                    if(indegree[i]==0)
                    q.push(i);
            }
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
    g.topologicalsort();
    return 0;
}