#include<iostream>

using namespace std;

class Tnode
{  
    public:

    int data;
    Tnode *right;
    Tnode *left;

    Tnode(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};


Tnode* buildtree(Tnode* root)
{   
    int data;
    cout << "Enter the Data: ";
    cin >> data;

    root = new Tnode(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data to insert in left of " << data << endl;
    root->left = buildtree(root->left);

    cout << "Enter data to insert in right of " << data << endl;
    root->right = buildtree(root->right);

    return root; 

}

void inorder(Tnode *root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main()
{
    Tnode *root = NULL;

    root = buildtree(root);

    //inorder(root);

    for(int i=0 ; i<100 ; i++)
    {
        cout << root[i] << " ";
    }


}