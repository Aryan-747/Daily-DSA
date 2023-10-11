#include<iostream>

using namespace std;


void merge(int a[], int l , int mid ,int r)
{   
    int i = l;
    int j = mid + 1;
    int k = l;

    int b[l+r+1];

    while(i<=mid && j<=r)
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            i++;        
        }

        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if(i>mid)
    {
        while(j<=r)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for(int i=l ; i<=r ; i++)
    {
        a[i] = b[i];
    }

}

void merge_sort(int a[], int l , int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;

        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }


}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array Elements: ";

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    merge_sort(a,0,n-1);

    cout << "Array after Merge Sort: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }

}