#include<iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the number of rows: " << endl;
    cin >> n;

    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = 1 ; j<=n ; j++){
            cout <<"* ";
        }
        cout << endl;
    }

}