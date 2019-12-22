#include<bits/stdc++.h>
using namespace std;
template<typename T>
class stacks{
	private:
	vector<T> V;
	public:
	void push(T data){
	 V.push_back(data);		
	}	
	bool empty(){
		return V.size()==0;
	}
	void pop(){
	 if(!empty())
	  V.pop_back();		
	}
	T top(){
	 return V[V.size()-1];
	}
    void empty2(T data){
	 if(empty()){
	 	push(data);
	 	return ;
	 }
	 else{	
	    T num=top();
		pop();
		empty2(data);
		push(num);	
	 }
	}
	void reverse(){
		if(empty()){
		 return ;			
		}
		else{
			T num=top();
		   pop();
		   reverse();
		   empty2(num);
		}
	}
};
int main(){
	stacks<int> s;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		s.push(num);
	}	
	s.reverse();
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();		
	}
	return 0;
}
