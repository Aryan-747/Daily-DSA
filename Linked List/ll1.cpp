#include<iostream>

using namespace std;


class Node
{
    public:
    
    int data;
    Node *next;


    //Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //Destructor

    ~Node()
    {
        int val = this->data;

        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory has been freed for Node with Data " << val << endl;

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

// Function to Insert at Given Pos..

void insertatgivenpos(Node* &tail, Node* &head, int pos , int d)
{

    Node* nodetoins = new Node(d);
    Node* temp = head;


    if(pos == 1)
    {
        insertathead(head,d);
        return;
    }

    int cnt = 1;

    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertattail(tail,d);
        return;
    }

    nodetoins->next = temp->next;
    temp->next = nodetoins;
}


void deleteatgivenpos(int pos , Node* &head)
{

    if(pos == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    else
    {
        int cnt = 1;

        Node *prev = NULL;
        Node *curr = head;

        while(cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }

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

    insertattail(tail,10);
    display(head);

    insertatgivenpos(tail,head,5,55);
    display(head);

    deleteatgivenpos(4,head);
    display(head);

    cout << "Tail " << tail->data << endl;
    cout << "Head " << head->data << endl;
}