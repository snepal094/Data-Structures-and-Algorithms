//Stack Implementation
//Top Varying Method
#include<iostream>
#include<conio.h>
using namespace std;

#define MAXSIZE 5

class stack{
	private:
		int top, st[MAXSIZE], data, i;
		
	public:
	    stack(){
	    	top=-1;
		}	
		
	void push();
	void pop();
	void display();	
};

void stack::push(){
	if(top==MAXSIZE-1)
		cout<<"Stack is full."<<endl;
	else{
		cout<<"Enter data to be pushed: ";
		cin>>data;
		top++;
		st[top]=data;
	}
}

void stack::pop(){
	if(top==-1)
		cout<<"Stack is empty."<<endl;
	else{
		cout<<"Popped Item= "<<st[top]<<endl;
		top--;
	}
}

void stack::display(){
	cout<<"Items currently in the stack are listed below from top to bottom: "<<endl;
	for(i=top;i>-1;i--){
		cout<<st[i]<<endl;
	}
}

int main(){
	int choice;
	stack s;
	
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	
	while(1){
		cout<<endl;
		cout<<"Enter the corresponding serial number: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				s.push();
				break;
				
			case 2:
			    s.pop();
				break;
				
			case 3:
			    s.display();
				break;
				
			case 4:
			    exit(0);
				break;	
				
			default:
			    cout<<"Invalid Input"<<endl;			
		}
	}
	
	getch();
	return 0;
}
