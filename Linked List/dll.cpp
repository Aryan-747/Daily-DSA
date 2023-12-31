#include<iostream>

using namespace std;

class Node
{   
    public:

    int data;
    Node *next;
    Node *prev;

    // Constructor..
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

};


// Traversal of a Linked List.

void display(Node* &head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Finding out lenght of a Linked List.

int getlength(Node* &head)
{
    int length = 0;
    Node *temp = head;

    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertathead(Node* &head , int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node* &tail , int d)
{
    Node *temp = new Node(d);

    temp->prev = tail;
    tail->next = temp;

    tail = temp;
}

void insertatgivenpos(Node* &head , Node* &tail , int pos , int d)
{   

    // Inserting at Start.
    if(pos == 1)
    {
        insertathead(head,d);
        return;
    }

    Node *temp = head;
    Node *insg = new Node(d);

    int c = 1;

    while(c<pos-1)
    {
        temp = temp->next;

        c++;
    }

    // Inserting at End.
    if(temp->next == NULL)
    {
        insertattail(tail,d);
        return;
    }

    insg->next = temp->next;
    temp->next->prev = insg;
    temp->next = insg;
    insg->prev = temp;

}


void deleteatgivenpos(Node* &head , Node* &tail , int pos)
{   

    // Deleting first node.
    if(pos == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
        return;
    }

    // Deleting any node in the middle or last node.

    Node* prev = NULL;
    Node* curr = head;

    int cnt = 1;

    while(cnt<pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if(curr->next == NULL)
    {
        tail = curr->prev;
        tail->next = NULL;
        curr->prev = NULL;

        delete curr;
        return;
    }

    prev->next = curr->next;
    curr->prev = NULL;
    curr->next = NULL;

    delete curr;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    display(head);

    insertathead(head,50);
    display(head);

    insertathead(head,69);
    display(head);

    insertattail(tail,29);
    display(head);

    insertattail(tail,420);
    display(head);

    insertatgivenpos(head,tail,3,110);
    display(head);

    insertatgivenpos(head,tail,5,510);
    display(head);

    insertatgivenpos(head,tail,6,210);
    display(head);

    insertatgivenpos(head,tail,1,310);
    display(head);

    deleteatgivenpos(head,tail,1);
    display(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

}