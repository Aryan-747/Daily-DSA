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

    int a2[n];

    int k = 0;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a1[i] == a1[j])
            {
                a2[k] = a1[i];  
                k++;
            }
        }
    }

    for(int i=0 ; i<k ; i++)
    {
        cout << a2[i] << " ";
    }
}