#include<iostream>

using namespace std;

class Node
{
    public:

    int data;
    Node *right;
    Node* left;

    Node(int d)
    {
        this->data =d;
        this->right = NULL;
        this->left = NULL;
    }

};

Node* insertintobst(Node* &root , int d)
{   
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d>root->data)
    {
        root->right = insertintobst(root->right,d);
    }

    else
    {
        root->left = insertintobst(root->left,d);
    }

    return root;

}

void preorder(Node* &root)
{   
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* &root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void postorder(Node* &root)
{
    if(root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


void getinput(Node* &root)
{
    int d;
    cin >> d;

    while(d!=-1)
    {   
        root = insertintobst(root,d);
        cin >> d;
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter elements to insert into BST: ";

    getinput(root);
    
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

}