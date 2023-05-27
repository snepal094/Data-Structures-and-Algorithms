//Implementation of a queue with both head pointer and tail pointer varying
#include<iostream>
#include<conio.h>
using namespace std;

#define MAXSIZE 5

class queue{
	int front, rear, q[MAXSIZE], item;
	
	public:
		queue(){
			front=0;
			rear=-1;
		}
	
	void enqueue();
	void dequeue();
	void display();	
};

void queue::enqueue(){
	if(rear==MAXSIZE-1)
		cout<<"Queue is full."<<endl;
    else{
    	cout<<"Data to be enqueued= ";
    	cin>>item;
    	rear++;
    	q[rear]=item;
	}	
}

void queue::dequeue(){
	if(front>rear)
		cout<<"Queue is empty."<<endl;
	else{
	    item=q[front];
	    cout<<"Dequeued Item= "<<item<<endl;
	    front++;
}
} 

void queue:: display(){
	cout<<"Items in the queue are: "<<endl;
	for(int i=front;i<=rear;i++)
		cout<<q[i]<<endl;
}

int main(){
	int choice;
	queue q;
	cout<<"1) Enqueue"<<endl;
	cout<<"2) Dequeue"<<endl;
	cout<<"3) Display"<<endl;
	cout<<"4) Exit"<<endl;
	cout<<endl;
	
	while(1){
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				q.enqueue();
				break;
		    
			case 2:
			    q.dequeue();
				break;
				
			case 3:
			    q.display();
				break;
				
			case 4:
			    exit(0);
				break;		
				
			default:
			    cout<<"Invalid Input."<<endl;
				break;			
		}
		cout<<endl;
	}
	getch();
	return 0;
}
