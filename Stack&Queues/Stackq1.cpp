#include<iostream>
#define SIZE 50

using namespace std;

int top = -1;

int stack[SIZE];


void push(int value)
{
    if(top == SIZE-1)
    {
        
    }
    else
    {   
        top++;
        stack[top] = value;
    }
    
}

void pop()
{
    if(top == -1)
    {
        cout << "Stack is empty. Cannot perform pop operation." << endl;
    }
    
    else
    {
        top--;
    }
}

void display()
{
    if(top == -1)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {   
        cout << "Elements in the stack: ";
        for(int i = top ; i>=0 ; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    
}


int main()
{
    int choice;
    
    while(1)
    {   
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                int value;
                cin >> value;
                push(value);
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;
            
            case 4:
                cout << "Exiting the program." << endl;
                exit(0);
            
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }
}