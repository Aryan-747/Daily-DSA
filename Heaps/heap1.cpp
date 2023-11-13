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

        int index = 1;
        while(index < size){

            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int swapIndex = index;

           if(leftIndex <= size && arr[swapIndex] < arr[leftIndex])
           {
               swapIndex = leftIndex;
           }
           if(rightIndex <= size && arr[swapIndex] < arr[rightIndex])
           {
               swapIndex = rightIndex;
           }

            if(index != swapIndex)
            {
                swap(arr[index], arr[swapIndex]);
                index = swapIndex;
            }

            else
            {
                return;
            }
        }
    }

};

// Heapify to create Max Heap. (Follows 1-Based Indexing)

void heapify(int arr[],int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if(right<=n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n)
{
    int size = n;

    while(size>1)
    {
        swap(arr[size],arr[1]);

        size--;

        heapify(arr,size,1);
    }
}


int main()
{
    /*
    heap h1;

    h1.insert(50);
    h1.insert(55);
    h1.insert(53);
    h1.insert(52);
    h1.insert(54);

    h1.print();

    h1.deletefromheap();
    */

   int arr[6] = {-1,54,53,55,52,50};
   int n = 5;

   // Heap Creation

   for(int i=n/2 ; i>0 ; i--)
   {
    heapify(arr,n,i);
   }

   cout << "Printing the array now: ";

   for(int i=1 ; i<=n ; i++)
   {
    cout << arr[i] << " ";
   }
   cout << endl;

   heapsort(arr,n);

   cout << "Printing the sorted array: ";

   for(int i=1 ; i<=n ; i++)
   {
    cout << arr[i] << " ";
   }
   cout << endl;


}