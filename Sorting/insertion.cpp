#include<iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: " ;
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    int pos;
    int ele;

    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;

    cout << "Enter the element: ";
    cin >> ele;

    n++;

    for(int i=n-1 ; i>=pos-1 ; i--)
    {
        a[i+1] = a[i];
    }
    a[pos-1] = ele;

    cout << "Array after insertion: ";
    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }


}