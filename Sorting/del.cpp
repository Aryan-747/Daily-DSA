#include<iostream>

using namespace std;

int main()
{

    int n;
    
    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    // commencing deletion

    int pos;

    cout << "Enter position you want to delete: ";
    cin >> pos;

    if(pos>n)
    {
        cout << "Invalid positon.";
    }

    else
    {
    for(int i= pos-1 ; i<n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    cout << "Array after deletion: " << endl;

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    }
}