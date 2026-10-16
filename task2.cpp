#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* top=nullptr;

void push(int value)
{
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=top;
    top=newNode;
}

void pop()
{
    if(top==nullptr){
        cout<<"Stack is empty. Cannot pop."<<endl;
    }
    else{
        Node* temp=top;
        cout<<"Removed: "<<temp->data<<endl;
        top=top->next;
        delete temp;
    }
}

void peek()
{
    if(top==nullptr){
        cout<<"Stack is empty. No top value."<<endl;
    }
    else{
        cout<<"Top: "<<top->data<<endl;
    }
}

void display()
{
    if(top==nullptr){
        cout<<"Stack is empty."<<endl;
    }
    else{
        Node* temp=top;
        cout<<"Stack: ";
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    push(5);
    push(15);
    push(25);
    display();
    pop();
    peek();

    while(top!=nullptr){
        pop();
    }
    pop();
    peek();
    display();

    return 0;
}
