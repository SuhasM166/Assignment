#include<iostream>
using namespace std;

struct stack{
    int st[5];
    int top;
};
typedef struct stack stack;

stack s;

void push();
void pop();
void peep();
void disp();
void isEmpty();
void isFull();

int main()
{
    int ch;
    s.top=-1;

    do{
        cout<<endl<<"*Menu Of Stack*";
        cout<<endl<<"1.PUSH";
        cout<<endl<<"2.POP";
        cout<<endl<<"3.PEEP";
        cout<<endl<<"4.DISPLAY";
        cout<<endl<<"5.ISEMPTY";
        cout<<endl<<"6.ISFULL";
        cout<<endl<<"7.EXIT";

        cout<<endl<<"Enter your choice:";
        cin>>ch;

        switch(ch){
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:peep();
                    break;
            case 4:disp();
                    break;
            case 5:isEmpty();
                    break;
            case 6:isFull();
                    break;
        }

    }while(ch>=1&&ch<=6);
    
}

void push(){
    if(s.top==4){
        cout<<endl<<"Stack is full!";
    }
    else{
        s.top++;

        cout<<endl<<"Enter the element in stack:";
        cin>>s.st[s.top];

        cout<<endl<<s.st[s.top]<<" is pushed in the stack ";

    }
}

void pop(){
    if(s.top==-1){
        cout<<endl<<"Stack is EMPTY!!....SORRY";
    }
    else{
        cout<<endl<<s.st[s.top]<<" is popped";
        s.top--;
    }
}

void disp(){
    int i ;
    if(s.top==-1){
        cout<<endl<<"Stack is EMPTY!!....SORRY";
    }
    else{
        for(i=s.top;i>=0;i--){
            cout<<endl<<s.st[i];
        }
    }
}

void peep(){
    if(s.top==-1){
        cout<<endl<<"Stack is EMPTY!!....SORRY";
    }
    else
    cout<<endl<<s.st[s.top]<<" is peeped";
}

void isEmpty(){
    if(s.top==-1){
        cout<<endl<<"Stack is EMPTY!!....SORRY";
    }
    else
    cout<<endl<<"There is something in stack !";
}

void isFull(){
    if(s.top==4){
        cout<<endl<<"Stack is full!";
    }
    else{
        cout<<endl<<"NOPS.......";
    }   
}