#include<iostream>
using namespace std;


class stack{
	int arr[5];
	int top;
	
	public:
		stack(){
			cout<<"STACK IS CREATED"<<endl;
			top = -1;
			
		}
		
		void push(int value){
			arr[++top] = value;
			cout<<value<<" ";
		}
		
		int peek(){
			return arr[top];
		}
		
		bool isEmpty(){
			if(top == -1){
				return true;
			}
			else{
				return false;
			}
		}
		
		int size(){
			return (top+1);
		}
		
		void pop(){
			cout<<"DELETED VALUE:- "<<arr[top]<<endl;
			top--;
			
		}
	
};
int  main(){
	stack s;
	
	cout<<"IS EMPTY: - "<<s.isEmpty()<<endl;
	cout<<"SIZE:- "<<s.size()<<endl;
	
	cout<<"PUSH"<<endl;
	s.push(4);
	s.push(7);
	s.push(9);
	cout<<endl;
	
	cout<<"PEEK:- "<<s.peek()<<endl;
	
	cout<<"IS EMPTY: - "<<s.isEmpty()<<endl;
	cout<<"SIZE:- "<<s.size()<<endl;
	
	s.pop();
	cout<<"PEEK:- "<<s.peek()<<endl;
	
	
}
