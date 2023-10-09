#include<iostream>
using namespace std;

int main()
{

    int n;
    int count = 0;

    cout << "Enter the number for prime test: ";
    cin >> n;


    if(n == 1)
    {
        cout << "Prime" << endl;
    }

    else if (n == 2)
    {
        cout << "Prime" << endl;
    }

    else
    {
        for(int i=2; i<n ;i++)
        {
            if(n%i == 0)
            {
                count++;
            }
        }

         if(count > 0)
        {
        cout << "Not Prime" << endl;
        }
        else
        {
        cout << "Prime" << endl;
        }
    }

}