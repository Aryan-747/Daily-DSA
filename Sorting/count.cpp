#include<iostream>

using namespace std;

int main()
{


    int n;
    int count = 0;
    int k=0;

    cin >> n;

    int a[n];
    int b[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        b[k] = count;
        k++;
        count = 0;
    }

    for(int i=0 ; i<k ; i++)
    {
        cout << b[i] << " ";
    }


}