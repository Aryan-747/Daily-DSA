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


void insertathead(Node* &head , int d)
{
    Node *temp;

    temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node* &tail , int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatgivenpos(Node* &head , Node* &tail , int pos , int d)
{
    if(pos == 1)
    {
        insertathead(head,d);
        return;
    }

    int c = 1;

    Node *temp = head;
    Node *toins = new Node(d);

    while(c<pos-1)
    {
        temp = temp->next;
        c++;
    }

    if(temp->next == NULL)
    {
        insertattail(tail,d);
        return;
    }

    toins->next = temp->next;
    temp->next->prev = toins;
    toins->prev = temp;
    temp->next = toins;
}


void deleteatgivenpos(Node* &head , Node* &tail , int pos)
{
    if(pos == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        
        delete temp;
        
        return;
    }

    int c = 1;

    Node *prev = NULL;
    Node *curr = head;

    while(c<pos)
    {
        prev = curr;
        curr = curr->next;
        c++;
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
    curr->next->prev = prev;
    curr->prev = NULL;
    curr->next = NULL;

}


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

int main()
{

    int n;
    int data;

    Node *head;
    Node *tail;

   cout << "Enter Number of Nodes: ";
   cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        cout << "Enter data: ";
        cin >> data;

        if(i==0)
        {
            Node *n1 = new Node(data);
            head = n1;
            tail = n1;
        }

        else
        {
            insertattail(tail,data);
        }
    }

    display(head);

    deleteatgivenpos(head,tail,3);
    display(head);

    cout << "Head is: " << head->data << endl;
    cout << "Tail is: " << tail->data << endl;

}