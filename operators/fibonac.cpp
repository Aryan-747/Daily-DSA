#include<iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the number upto which you want the fibonacci series: ";
    cin >> n;

    int n1 = 0;
    int n2 = 1;


    cout << n1 << endl;
    cout << n2 << endl;

    for(int i=1 ; i<=n ; i++)
    {
        int next = n1 + n2;
        cout << next << endl;
        n1 = n2;
        n2 = next;
    }

}