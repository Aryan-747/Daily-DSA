#include<iostream>
#define SIZE 3

using namespace std;

int front = 0;
int rear = 0;
int queue[SIZE];


void enqueue(int value)
{
    if(rear == SIZE)
    {
        cout << "Queue Overflow" << endl;
    }

    else
    {
        queue[rear] = value;
        rear++;
    }

}

void dequeue()
{
    if(rear == front)
    {
        cout << "Queue Underflow" << endl;
    }

    else
    {
        cout << "Deleted Element is: " << queue[front] << endl;
        front++;
    }

}

void display()
{
    if(rear == front)
    {
        cout << "Queue Underflow" << endl;
    }

    else
    {
        for(int i=front ; i<rear ; i++)
        {
            cout << queue[i] << " ";
        }
    }
}


int main()
{  
    int choice , value;

    cout << "Enter 1 to Enqueue\nEnter 2 to Dequeue\nEnter 3 to Display\nEnter 4 to Exit Program" << endl;

    while(1)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            
            case 2:
                dequeue();
                break;
            
            case 3:
                display();
                break;
            
            case 4:
                exit(0);
                break;
            
            default:
                cout << "Invalid Choice! Please select again." << endl;

        }

}
}