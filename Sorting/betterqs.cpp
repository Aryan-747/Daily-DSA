#include<iostream>

using namespace std;

int partition(int a[], int lb , int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;


    while(start<end)
    {
    while(a[start]<=pivot)
    {
        start++;
    }

    while(a[end]>pivot)
    {
        end--;
    }

    if(start<end)
    {
        swap(a[start],a[end]);
    }
    }

    swap(a[lb],a[end]);

    return end;

}

void Quicksort(int a[],int lb , int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }

}

int main()
{
    int n ;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    Quicksort(a,0,n-1);

    cout << "Array After Quicksort: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
}