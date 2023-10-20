#include<iostream>
#define SIZE 5

using namespace std;

int stack[SIZE];
int top = -1;

void push(int value)
{
    if(top == SIZE-1)
    {
        cout << "Stack Is Full" << endl;
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
        cout << "Stack is empty." << endl;
    }

    else
    {   
        cout << stack[top] << " Deleted" << endl;
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
        for(int i=top ; i>=0 ; i--)
        {
            cout << stack[i] << " ";
        }
    }

}

int main()
{

    int choice , value;

    cout << "Enter 1 to insert value into stack\nEnter 2 to pop value from stack\nEnter 3 to display all elements present in stack\nEnter 4 to exit from the program" << endl;

    while(1)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter The Value To Push Into Stack: ";
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
                exit(0);
                break;
            
            default:
                cout << "Invalid Choice" << endl;
                break;
            

        }
    }

}