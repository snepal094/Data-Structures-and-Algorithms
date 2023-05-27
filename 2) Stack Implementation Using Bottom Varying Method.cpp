//Stack Implementation
//Bottom Varying Method
#include<iostream>
#include<conio.h>
using namespace std;

#define MAXSIZE 5

class stack{
	int st[MAXSIZE], i, bos, item;
	
	public:
		stack(){
			bos=0;
		}
		
	    void push();
		void pop();
		void display();	
};

void stack::push(){
	if(bos==MAXSIZE)
		cout<<"Stack is full."<<endl;
	else{
		cout<<"Enter item to be pushed: ";
	    cin>>item;
	    for(i=bos;i>0;i--){
		    st[i]=st[i-1];
		}
	    bos++;
	    st[0]=item;
	}	
}

void stack::pop(){
	if(bos==0)
		cout<<"Stack is empty."<<endl;
	else{
		cout<<"Popped Item= "<<st[0]<<endl;
		bos--;
	    for(i=0;i<bos;i++){
		    st[i]=st[i+1];
		}
	}
}

void stack::display(){
	cout<<"Items in the stack from bottom to top are: "<<endl;
	for(i=0;i<bos;i++){
		cout<<st[i]<<endl;
	}
}

int main(){
	stack s;
	int choice;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	
	while(1){
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
		cout<<endl;
	}
	getch();
	return 0;
}
