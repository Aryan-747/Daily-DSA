#include<iostream>

using namespace std;


class Node
{
    public:
    
    int data;
    Node * next;


    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

// Function to Insert at Head..

void insertathead(Node* &head , int d)
{
    // Create New Node;

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Function to Insert at tail..

void insertattail(Node* &tail , int d)
{

    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
    
}


void display(Node* &head)
{
    Node* temp = head;

    while(temp!= NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    display(head);

    insertattail(tail,15);
    display(head);

    insertattail(tail,69);
    display(head);
}