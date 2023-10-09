#include<iostream>

using namespace std;

int main()
{

    int n;
    int count = 1;

    cin >> n;


    for(int i = 1 ; i<=n ; i++)
    {

        int space = n-i;

        while(space)
        {
            cout << " ";
            space --;
        }

        for(int k=1 ; k<=i ; k++)
        {
            cout << count << " ";
            count++;
        }
        count = 1;

        for(int f=n ; f>i ; f--)
        {
        }

        cout << endl;



    }






}