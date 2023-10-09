#include<iostream>

using namespace std;

int main()
{

    int n;
    int count = 0;
    cin >> n;

    int a1[n];
    int a2[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a1[i];
    }

    int j=0;

    for(int i=0 ; i<n ; i++)
    {
        if(a1[i]<=0)
        {
        }

        else
        {
            a2[j] = a1[i];
            j++;
        }
    }

    for(int i=0 ; i<j ; i++)
    {
        cout << a2[i] << " ";
    }
}