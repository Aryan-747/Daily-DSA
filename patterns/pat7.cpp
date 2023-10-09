#include<iostream>

using namespace std;

int main()
{

    int n;
    int cou;

    cout << "Enter n: " << endl;
    cin >> n;

    for(int i=1 ; i<=n ; i++)
    {

        cou = i;

        for(int j=0 ; j<i; j++)
        {
            cout << cou << " ";
            cou++;
        }

        cout << endl;

    }



}