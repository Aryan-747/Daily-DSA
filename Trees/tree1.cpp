#include<iostream>

using namespace std;

class Node
{

    public:

    int data;
    Node *right;
    Node *left;

    Node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }

};

void inorder(Node* root) // LNR
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) // NLR
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) // LRN
{
    if(root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


Node* buildtree(Node* root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data ==-1)
    {
        return NULL;
    }

    cout << "Enter data for inserting left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inserting right of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}



int main()
{
    Node *root = NULL;

    root = buildtree(root);

    cout << "Inorder traversal is: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal is: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal is: ";
    postorder(root);
    cout << endl;


}