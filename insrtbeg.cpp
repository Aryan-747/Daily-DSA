#include<iostream>

using namespace std;

int main()
{
    
    cout << "Enter size of array: " << endl;
    int n;
    int ins;
    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to append at begining: " << endl;
    cin >> ins;
    n++;

    for(int i=n ; i>0 ; i--)
    {
        a[i-1] = a[i-2];
    }

    a[0] = ins;

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }

}