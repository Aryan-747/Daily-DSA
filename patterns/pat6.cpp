#include<iostream>

using namespace std;

int main()
{

    int n;
    int count = 1;

    cout << "Enter n: " << endl;
    cin >> n;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }






}