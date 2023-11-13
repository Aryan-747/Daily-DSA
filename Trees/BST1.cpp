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

Node* minval(Node* &root)
{
    Node *temp = root;

    while(temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

Node* maxval(Node* &root)
{
    Node *temp = root;

    while(temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

Node* deletefrombst(Node* &root, int val)
{
    if(root == NULL)
    {
        return root;
    }

    if(root->data == val)
    {
        // 0 Child

        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 Child
        
        // Left Child

        if(root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // Right Child

        if(root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 Child

        if(root->left != NULL &&  root->right != NULL)
        {
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deletefrombst(root->right,mini);
            return root;
        }

        return root;
    }

    else if (root->data > val)
    {
        root->left = deletefrombst(root->left,val);
        return root;
    }

    else
    {
        root->right = deletefrombst(root->right,val);
        return root;
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

    cout << "Min Value in Tree: " << minval(root)->data << endl;
    cout << "Max Value in Tree: " << maxval(root)->data << endl;

    // Deletion 
    root = deletefrombst(root,50);


    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    cout << "Min Value in Tree: " << minval(root)->data << endl;
    cout << "Max Value in Tree: " << maxval(root)->data << endl;


}