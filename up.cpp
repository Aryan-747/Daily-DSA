#include<iostream>

using namespace std;

int main()
{

    int n;
    int k=0;

    cin >> n;

    double old[n];
    double upd[n];


    for(int i=0 ; i<n ; i++)
    {
        cin >> old[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        if(old[i] >=0)
        {
            upd[k] = old[i];
            k++;
        }
    }

    for(int i=0 ; i<k ; i++)
    {
        cout << upd[i] << " ";
    }

}