#include<iostream>

using namespace std;


class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {

        this->data = d;
        this->next = NULL;
    }
};


void insertathead(Node* &head, int d)
{
    Node *temp;

    temp = new Node(d);

    temp->next = head;
    head = temp;

}


void insertattail(Node* &tail , int d)
{
    Node* temp;

    temp = new Node(d);

    tail->next = temp;
    tail = temp;

}

void insertatgivenpos(Node* &head , Node* &tail , int pos , int d)
{

    Node* toinsert;
    Node* temp = head;
    int c = 1;

    if(pos == 1)
    {
        insertathead(head,d);
        return;
    }

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

    toinsert = new Node(d);

    toinsert->next = temp->next;
    temp->next = toinsert;
}


void deleteatgivenpos(Node* &head , Node* &tail , int pos)
{

    if(pos==1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        int cnt = 1;
        Node *prev = head;
        Node *curr = head;

        while(cnt < pos)
        {   
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;

        if(prev->next == NULL)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;

    }

    
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
    Node *n1 = new Node(10);

    Node *head = n1;
    Node *tail = n1;

    display(head);
    
    insertathead(head,15);
    display(head);

    insertathead(head,82);
    display(head);

    insertattail(tail,85);
    display(head);

    insertattail(tail,69);
    display(head);

    insertatgivenpos(head,tail,2,555);
    display(head);

    insertatgivenpos(head,tail,1,419);
    display(head);

    insertatgivenpos(head,tail,8,319);
    display(head);

    insertatgivenpos(head,tail,8,262);
    display(head);

    deleteatgivenpos(head,tail,1);
    display(head);

    deleteatgivenpos(head,tail,3);
    display(head);

    deleteatgivenpos(head,tail,7);
    display(head);

    deleteatgivenpos(head,tail,6);
    display(head);

    cout << head->data << endl;
    cout << tail->data << endl;

}