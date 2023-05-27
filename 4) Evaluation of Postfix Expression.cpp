//Evaluation of Postfix expression
#include<iostream>
#include<conio.h>
using namespace std;

#define MAXSIZE 20

class postfix{
	public:
		float stack[MAXSIZE];
		char postf[MAXSIZE];
		int top;
		
		postfix(){
			top=-1;
		}
		
		float pop();
		void push(float);
};		

void postfix::push(float a){
	stack[++top]=a;
}

float postfix::pop(){
	float a;
	a=stack[top];
	top--;
	return a;
}

int main(){
postfix p;
int i=0;
float a,b,x;

cout<<"Enter the postfix expression: ";
cin>>p.postf;

while(p.postf[i]!='\0'){
	switch(p.postf[i]){
		case '+':
			a=p.pop();
			b=p.pop();
			x=b+a;
			p.push(x);
			break;
			
		case '-':
		    a=p.pop();
			b=p.pop();
			x=b-a;
			p.push(x);
			break;	
			
		case '*':
		    a=p.pop();
			b=p.pop();
			x=b*a;
			p.push(x);
			break;	
			
		case '/':
		    a=p.pop();
			b=p.pop();
			x=b/a;
			p.push(x);	
			break;
			
		default:
		    p.push(p.postf[i]-48);	
		    break;
	}
	i++;
}
cout<<"Result of the given postfix expression= "<<p.stack[p.top]<<endl;
getch();
return 0;
}

