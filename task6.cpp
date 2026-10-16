#include<iostream>
using namespace std;

int items[5];
int front=-1;
int rear=-1;

void enqueue(int value)
{
    if(rear==4){
        cout<<"Cannot add customer. Rear is at the last index."<<endl;
        cout<<"This linear queue reuses earlier spaces only after it becomes empty."<<endl;
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
        cout<<"Customer added: "<<value<<endl;
    }
}

void dequeue()
{
    if(front==-1){
        cout<<"Queue is empty. No customer to serve."<<endl;
    }
    else{
        cout<<"Serving customer: "<<items[front]<<endl;
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
        cout<<"Queue is empty. No next customer."<<endl;
    }
    else{
        cout<<"Next customer: "<<items[front]<<endl;
    }
}

void display()
{
    if(front==-1){
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Customer queue: ";
        for(int i=front;i<=rear;i++){
            cout<<items[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int choice;
    int token;

    do{
        cout<<endl;
        cout<<"1. Add customer"<<endl;
        cout<<"2. Serve next"<<endl;
        cout<<"3. View next"<<endl;
        cout<<"4. Display queue"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter customer token number: ";
                cin>>token;
                enqueue(token);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peekFront();
                break;
            case 4:
                display();
                break;
            case 5:
                cout<<"Program ended."<<endl;
                break;
            default:
                cout<<"Invalid choice. Enter a number from 1 to 5."<<endl;
        }
    }
    while(choice!=5);

    return 0;
}
