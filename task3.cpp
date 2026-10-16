#include<iostream>
#include<string>
using namespace std;

char items[20];
int top=-1;

void push(char value)
{
    if(top==19){
        cout<<"Stack is full."<<endl;
    }
    else{
        top++;
        items[top]=value;
    }
}

char pop()
{
    if(top==-1){
        cout<<"Stack is empty."<<endl;
        return '\0';
    }
    else{
        char value=items[top];
        top--;
        return value;
    }
}

int main()
{
    string word;
    cout<<"Enter one word (up to 20 characters): ";
    cin>>word;

    if(word.length()==0 || word.length()>20){
        cout<<"Word must contain 1 to 20 characters."<<endl;
        return 0;
    }

    int length=word.length();
    for(int i=0;i<length;i++){
        push(word[i]);
    }

    cout<<"Reversed word: ";
    while(top!=-1){
        cout<<pop();
    }
    cout<<endl;

    return 0;
}
