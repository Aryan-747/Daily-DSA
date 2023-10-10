#include<iostream>

using namespace std;


void merge(int array[], int l , int mid , int u)
{
    int k = l;
    int i = l;
    int j = mid+1;

    int b[l+u+1];


    while(i<=mid && j<=u)
    {
        if(array[i] <= array[j])
        {
            b[k] = array[i];
            i++;
        }

        else
        {
            b[k] = array[j];
            j++;
        }
        k++;
    }

    if(i>mid)
    {
        while(j<=u)
        {
            b[k] = array[j];
            j++;
            k++;
        }
    }

    else
    {
        while(i<=mid)
        {
            b[k] = array[i];
            i++;
            k++;
        }
    }

   for(k = l ; k<=u ; k++)
   {
    array[k] = b[k];
   }
}

void merge_sort(int array[],int l , int u)
{
    if(l<u)
    {
        int mid = (l+u)/2;

        merge_sort(array,l,mid);
        merge_sort(array,mid+1,u);
        merge(array,l,mid,u);
    }
}

int main()
{
    int n;

    cout << "Enter Size Of Array: ";
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


}