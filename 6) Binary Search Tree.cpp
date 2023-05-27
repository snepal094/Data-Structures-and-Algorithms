//Binary Search Tree
#include<iostream>
#include<conio.h>
using namespace std;

class node{
	public:
		node *left;
		node *right;
		int info;
};

class trees{
	public:
		node *newnode;
		node *root;
		
		trees(){
			root=NULL;
		}
		
		void insertion(node*,int);
		void preorder(node*);
		void postorder(node*);
		void inorder(node*);
};

void trees::insertion(node *tree, int data){
	newnode=new node;
	newnode->info=data;
	newnode->left=NULL;
	newnode->right=NULL;
	
	if(tree==NULL){
		tree=newnode;
		root=newnode;
	}
	
	else{
		if(data<tree->info){
			if(tree->left==NULL)
				tree->left=newnode;
			else
			    insertion(tree->left,data);	
			}
			
		else if (data>tree->info){
			if(tree->right==NULL)
			   tree->right=newnode;
			else
			   insertion(tree->right,data);   
		}
		
		else
		    cout<<"Duplicate data entered."<<endl;	
		}
	}

void trees::preorder(node *root){
	node *temp;
	temp=root;
	if(temp!=NULL){
		cout<<temp->info<<endl;
		preorder(temp->left);
		preorder(temp->right);
	}
}

void trees::postorder(node *root){
	node *temp;
	temp=root;
	if(temp!=NULL){
		postorder(temp->left);
		postorder(temp->right);
		cout<<temp->info<<endl;
	}
}

void trees::inorder(node *root){
	node *temp;
	temp=root;
	if(temp!=NULL){
	    inorder(temp->left);
	    cout<<temp->info<<endl;
	    inorder(temp->right);
	}
}

int main(){
	trees t;
	int choice, data;
	
	cout<<"1) Insertion"<<endl;
	cout<<"2) Preorder"<<endl;
	cout<<"3) Postorder"<<endl;
	cout<<"4) Inorder"<<endl;
	cout<<"5) Exit"<<endl;
	cout<<endl;
	
	while(1){
		cout<<"Enter the corresponding serial number: ";
	    cin>>choice;
	    
		switch(choice){
			case 1:
				cout<<"Data to be inserted: ";
				cin>>data;
				t.insertion(t.root,data);
				break;
				
			case 2:
			    t.preorder(t.root);
				break;
			
			case 3:
			    t.postorder(t.root);
				break;
				
			case 4:
			    t.inorder(t.root);
				break;
				
			case 5:
			    exit(0);
				break;					
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
