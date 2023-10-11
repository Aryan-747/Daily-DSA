#include<iostream>

using namespace std;


void inssort(int a[], int n)
{


    for(int i=1 ; i<n ; i++)
    {
        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }


}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    inssort(a,n);

    cout << "Array after Insertion Sort: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }



}