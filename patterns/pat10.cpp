#include<iostream>

using namespace std;

int main()
{   
    int n;
    char ch = 'A';

    cout << "Enter n: " << endl;
    cin >> n;

    for(int i = 0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout << ch << " ";
            ch++;
        }

        ch = 'A';

        cout << endl;
    }






}