#include<iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter The Number Of Rows: " << endl;
    cin >> n;

    for(int i = 0 ; i<n ; i++)
    {
        for(int j= n ; j>0 ; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    
}