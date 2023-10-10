#include<iostream>

using namespace std;


void merge(int a[], int l , int mid ,int u)
{
    int i = l;
    int j = mid + 1;
    int k = l;

    int b[l+u];

    while(i<=mid && j<=u)
    {
        if(a[i] <= a[j])
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
        while(j <= u)
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

    for(int i=l ; i<=u ; i++)
    {
        a[i] = b[i];
    }
}

void merge_sort(int a[],int l, int u)
{
    if(l<u)
    {
        int mid = (l+u)/2;

        merge_sort(a,l,mid);
        merge_sort(a,mid+1,u);
        merge(a,l,mid,u);
    }
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    merge_sort(a,0,n-1);

    cout << "Array After Merge Sort: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}