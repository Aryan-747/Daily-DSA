#include<iostream>
#define SIZE 10

using namespace std;

int front = 0;
int rear = 0;
int queue[SIZE];


void enqueue(int value)
{

}

void dequeue()
{

}

void display()
{

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