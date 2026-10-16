#include <iostream>
using namespace std;

int items[5];
int top=-1;

void push(int value)
{
    if(top == 4){
        cout<< "Stack is full. Cannot push " << value << endl;
    }
    else{
        top++;
        items[top]=value;
    }
}

void pop()
{
    if(top == -1){
        cout<< "Stack is empty. Cannot pop." << endl;
    }
    else{
        cout<< "Removed: " << items[top] << endl;
        top--;
    }
}

void peek()
{
    if (top == -1){
        cout << "Stack is empty. No top value." << endl;
    }
    else{
        cout << "Top: " << items[top] << endl;
    }
}

void display()
{
    if (top == -1){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack: ";
        for (int i = top; i >= 0; i--){
            cout << items[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();

    push(30);
    push(40);
    push(50);
    push(60);
    display();

    while (top != -1){
        pop();
    }
    pop();
    peek();
    display();

    return 0;
}
