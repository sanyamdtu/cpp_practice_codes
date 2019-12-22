#include<bits/stdc++.h>
using namespace std;
template<typename T>
class stack{
	private:
	vector<T> V;
	public:
	void push(T data){
	 V.push_back(data);		
	}	
	bool empty(){
		return V,size()==0;
	}
	void pop(){
	 if(!empty())
	  V.pop_back();		
	}
	T top(){
	 return V[V.size()-1];
	}
};
int main(){
	return 0;
}
