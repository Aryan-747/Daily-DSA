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

    if(temp->next = NULL)
    {
        insertattail(tail,d);
        return;
    }

    toins->next = temp->next;
    temp->next->prev = toins;
    toins->prev = temp;
    temp->next = toins;
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
    cout << "Head is: " << head->data << endl;
    cout << "Tail is: " << tail->data << endl;

}