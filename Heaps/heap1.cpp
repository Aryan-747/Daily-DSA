#include<iostream>

using namespace std;

class heap
{
    public:

    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index>1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            
            else
            {
                return;
            }
        }
    }

    void print()
    {   
        cout << "Max Heap is: ";

        for(int i=1 ; i<=size ; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void deletefromheap()
    {
        // Step 1: Put last element in first node.
        arr[1] = arr[size];

        // Step 2: Remove Last Element.
        size--;

        // Step 3: Put Root Element in Correct Position.

        int i = 1;

        while(i<size)
        {
            int leftindex = 2*i;
            int rightindex = 2*i + 1;

            if(leftindex<size && arr[i] < arr[leftindex])
            {
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }

            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }

};


int main()
{
    heap h1;

    h1.insert(50);
    h1.insert(55);
    h1.insert(53);
    h1.insert(52);
    h1.insert(54);

    h1.print();

    h1.deletefromheap();

    h1.print();
}