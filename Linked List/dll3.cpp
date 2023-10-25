#include<iostream>

using namespace std;

class Node
{   
    public:

    int data;
    Node *next;
    Node *prev;


    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

};


void insertathead(Node* &head,int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node* &tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}


void display(Node* &head)
{
    Node *temp = head;

    while(temp!= NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


int main()
{

    Node* n1 = new Node(10);

    Node *head = n1;
    Node *tail = n1;

    insertathead(head,15);
    insertathead(head,69);
    display(head);

}