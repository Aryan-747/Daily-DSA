#include<iostream>
using namespace std;

int main()
{

    int n;
    int p = 1;

    cout << "Enter The Number Of Rows: " << endl;
    cin >> n;

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout << p << " ";
            p = p + 1;
        }
        cout << endl;
    }
}