#include<iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    int pos;

    cout << "Enter the position you want to delete: ";
    cin >> pos;

    for(int i=pos-1 ; i<n ; i++)
    {
        a[i] = a[i+1];
    }
    n--;

    cout << "Updated array: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
}