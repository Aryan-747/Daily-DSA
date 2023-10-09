#include<iostream>

using namespace std;


void TOH(int n, char source , char helper , char destination)
{

    if(n == 1)
    {
        cout << "Move " << n << " disk from " << source << " to " << destination << endl;
        return ;
    }

    TOH(n-1,source,destination,helper);
    cout << "Move " << n << " disk from " << source << " to " << destination << endl;
    TOH(n-1,helper,source,destination);

}

int main()
{
    int n;
    char source;
    char helper;
    char destination;

    cout << "Enter Number of Disks: ";
    cin >> n;

    cout << "Enter name of Source: ";
    cin >> source;

    cout << "Enter name of Helper: ";
    cin >> helper;

    cout << "Etner name of Destination: ";
    cin >> destination;

    TOH(n,source,helper,destination);
}