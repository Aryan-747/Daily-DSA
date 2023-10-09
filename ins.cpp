#include<iostream>

using namespace std;


int main()
{
    int size;
    
    cout << "Enter Size of array: ";
    cin >> size;

    int array[size];

    cout << "Enter array elements: ";
    for(int i=0 ; i<size ; i++)
    {
        cin >> array[i];
    }

    int num , pos;

    cout << "Enter number you want to insert: ";
    cin >> num;

    cout << "Enter position: ";
    cin >> pos;

    size++;

    if(pos>size)
    {
        cout << "Invalid Position." << endl;
    }

    else
    {  
        for(int i = size-1 ; i>=pos-1 ; i--)
        {
            array[i+1] = array[i];
        }
        array[pos-1] = num;
        
    cout << "Updated array: ";
    for(int i=0 ; i<size ; i++)
        {
        cout << array[i] << " ";
        }
    }
}