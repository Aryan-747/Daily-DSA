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

void insertatgivenpos(Node* &head , Node* &tail ,int pos ,int d)
{
    if(pos == 1)
    {
        insertathead(head,d);
        return;
    }

    int cunt = 1;

    Node *temp = head;
    Node *toins = new Node(d);

    while(cunt<pos-1)
    {
        temp = temp->next;
        cunt++;
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
        head = head->next;
        temp->next = NULL;
        temp->prev = NULL;
        head->prev = NULL;

        delete temp;
        return;
    }

    int cunt = 1;
    Node *prev = NULL;
    Node *curr = head;

    while(cunt < pos)
    {   
        prev = curr;
        curr = curr->next;
        cunt++;
    }

    if(curr->next == NULL)
    {
        tail = curr->prev;
        tail->next = NULL;
        curr->prev = NULL;

        delete curr;
        return;
    }

    curr->next->prev = prev;
    prev->next = curr->next;
    curr->prev = NULL;
    curr->next = NULL;

    delete curr;

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

void find(Node* &head , int data)
{
    Node *temp = head;

    int pos = 1;
    bool check = false;

    while(temp!= NULL)
    {
        if(temp->data == data)
        {
            cout << "Found at Position: " << pos << endl;
            check = true;
            break;
        }
        pos++;
        temp = temp->next;
    }

    if(check == false)
    {
        cout << "Not Found !" << endl;
    }

}


int main()
{

    Node* n1 = new Node(10);

    Node *head = n1;
    Node *tail = n1;

    insertattail(tail,15);
    insertattail(tail,69);
    insertatgivenpos(head,tail,1,51);
    insertatgivenpos(head,tail,5,651);
    display(head);
    deleteatgivenpos(head,tail,5);
    //deleteatgivenpos(head,tail,1);
    display(head);
    find(head,69);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

}