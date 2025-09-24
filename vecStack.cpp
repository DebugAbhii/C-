#include<iostream>
#include<vector>
using namespace std;

class Stack{
	private:
		vector<int> v;
		
	public:
		Stack(){
			cout<<"STACK CREATED!! "<<endl;
		}
		
		bool _isempty(){
			return v.empty();
		}
		
		int peek(){
			return v.back();
		}
		
		int size(){
			return v.size();
		}
		
		void push(int value){
			return v.push_back(value);
		}
		
		int pop(){
			int value = v.back();
			v.pop_back();
			return value;
		}
		
		void display(){
			
			for(int i = v.size()-1 ; i >= 0; i--){
				cout<<v[i]<<" ";
			}
		}
		
		
};

int main(){
	Stack s;
	
	cout<<"IS STACK EMPTY: "<<s._isempty();
    //s._isempty();
    
    cout<<"\nSIZE: " << s.size();
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    cout<<"\nPEEK: " << s.peek();
    
    cout<<"\nDISPLAY STACK: ";
	s.display();
    
    s.pop();
    cout<<"\nDISPLAY STACK: ";
    s.display();
    
    
	return 0;
}
