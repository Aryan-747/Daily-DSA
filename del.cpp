#include<iostream>
using namespace std;

void arraydel(int a[] , int n , int pos);

void arraydel(int a[] , int n , int pos)
{
    for(int i=pos-1 ; i<n ; i++)
    {
        a[i] = a[i+1];
    }
}

int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int array[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i];
    }

    int pos;

    cout << "Enter position you want to delete: ";
    cin >> pos;

    if(pos > n)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        arraydel(array,n,pos);
        n--;
        cout << "Updated array: ";
        for(int i=0 ; i<n ; i++)
        {
            cout << array[i] << " ";
        }

    }
    
    return 0;
}