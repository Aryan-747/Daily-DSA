#include<iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a1[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a1[i];
    }

    int m;

    cin >> m;

    int a2[m];

    for(int i=0 ; i<m ; i++)
    {
        cin >> a2[i];
    }

    int t = m + n;

    int a3[t];
    int k = 0;

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ;j++)
        {
                if(a2[i] == a1[j])
                {
                    a3[k] = a2[i];
                    k++;
                }
        }
        }

    for(int i=0 ; i<k ; i++)
    {
        cout << a3[i] << " ";
    }

}