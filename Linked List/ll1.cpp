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

    display(head);

    insertathead(head,15);
    display(head);

    insertathead(head,69);
    display(head);
}