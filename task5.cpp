#include<iostream>
using namespace std;

int items[5];
int front=-1;
int rear=-1;

void enqueue(int value)
{
    if(rear==4){
        cout<<"Insertion blocked. Rear is at the last index."<<endl;
    }
    else{
        if(front==-1){
            front=0;
            rear=0;
        }
        else{
            rear++;
        }
        items[rear]=value;
        cout<<"Inserted: "<<value<<endl;
    }
}

void dequeue()
{
    if(front==-1){
        cout<<"Queue is empty. Cannot remove."<<endl;
    }
    else{
        cout<<"Removed: "<<items[front]<<endl;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
    }
}

void peekFront()
{
    if(front==-1){
        cout<<"Queue is empty. No front value."<<endl;
    }
    else{
        cout<<"Front: "<<items[front]<<endl;
    }
}

void display()
{
    if(front==-1){
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Queue: ";
        for(int i=front;i<=rear;i++){
            cout<<items[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    peekFront();
    display();

    dequeue();
    dequeue();
    dequeue();
    peekFront();
    display();

    enqueue(40);
    peekFront();
    display();

    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    display();

    return 0;
}
