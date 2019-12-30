#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
    map<T,list<pair<T,int>>> m;
    public:
    void addedge(T u,T v,int dis,bool rev=1){
        my[u].push_back(pair<T,int>(v,dis));
        if(rev)
            my[v].push_back((pair<T,int>(u,dis));
    }
    void print(){
         for(auto i: my){
            cout<<i.first<<"-> ";
            for(auto s:i.second){
                cout<<s.first<<" , "<<s.second<<" -> ";
            }
            cout<<endl;
        }
    }
    void dijsktra(T source){
        map<T,int> dist;//map distance
        for(auto i:m)
         dist[i]=INT_MAX;//all the distace of the nodes is infinite
        set<pair<T,int>> s;
        dist[source]=0;
        s.insert(pair<T,int>(0,source));
        while(!s.empty()){
            auto p= *(s.begin());//start of the the set
            T node=p.second;
            int nodedist=p.first;  //  
            s.erase(s.begin);
            for(auto cldp: m[node]){
                if(nodedist+cldp.second<dist[cldp.first]){
                    T dest=cldp.first;
                        auto f=s.find(make_pair<dist[dest],dest>)
                    if(f!=s.end){
                        s.erase(f);
                    }
                    dist[dest]=nodedist+cldp.second;
                    dist[dest].insert(make_pair())
                }
            }
        }
    }
};
int main(){
    graph<string> g;
    g.addedge("Amritsar","Delhi",1);
    g.addedge("Amritsar","Jaipur",4);
    g.addedge("Jaiur","Mumbai",8);
    g.addedge("Jaipur","Delhi",2);
    g.addedge("Bhopal","Agra",2);
    g.addedge("Mumbai","Bhopal",3);
    g.addedge("Agra","Delhi",1);
    return 0;
}