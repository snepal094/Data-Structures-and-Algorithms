//Stack Implementation Using Linked List
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class node{
	public:
		node *next;
		int info;
};

class stack{
	public:
		node *newnode;
		node *top;
		int item;
		
		stack(){
			top=NULL;
		}
		
		void push(){
			cout<<"Item to be inserted: ";
			cin>>item;
			
			newnode=(node*)malloc(sizeof(node));
			if(newnode==NULL)
				cout<<"Memory is full."<<endl;
			else{
				newnode->info=item;
				newnode->next=top;
				top=newnode;
			}
		}
		
		int pop(){
			node *temp;
			int a;
			if(top==NULL)
				cout<<"Stack is empty."<<endl;
			else{
				a=top->info;
				temp=top;
				top=top->next;
				delete temp;
				return a; 
			}
		}
		
		void display(){
			node *ptr;
			ptr=top;
			while(ptr!=NULL){
				cout<<ptr->info<<endl;
				ptr=ptr->next;
			}
		}
};

int main(){
	stack s;
	int choice;
	
	cout<<"1) Push"<<endl;
	cout<<"2) Pop"<<endl;
	cout<<"3) Display"<<endl;
	cout<<"4) Exit"<<endl;
	cout<<endl;
	
	while(1){
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				s.push();
				break;
				
			case 2:
			    cout<<"Popped Item= "<<s.pop()<<endl;
				break;
				
			case 3:
			    s.display();
				break;
				
			case 4:
			    exit(0);
				break;			
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
