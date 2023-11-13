#include <iostream>

using namespace std;

int main() {
    
    int n1;
    
    cin >> n1;
    
    int a[n1];
    
    for(int i=0 ; i<n1 ; i++)
    {
        cin >> a[i];
    }

    int n2;
    
    cin >> n2;
    
    int b[n2];
    
    for(int i=0 ; i<n2 ; i++)
    {
        cin >> b[i];
    }


    // Creating new array of merged elements.

    int c[n1+n2];

    for(int i=0 ; i<n1+n2 ; i++)
    {   
        for(int k=0 ; k<n1 ; k++)
        {
            c[i] = a[k];
            i++;
        }

        for(int k=0 ; k<n2 ; k++)
        {
            c[i] = b[k];
            i++;
        }
    }

    cout << "Merged array: ";

    for(int i=0 ; i<n1+n2 ; i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;
    


    //Merging on top of existing array
    /*
    if(n1>n2)
    {
        for(int i=0 ; i<n1 ; i++)
        {
            a[n1+i] = b[i];
        }
        
        for(int i=0 ; i<n1+n2 ; i++)
        {
            cout <<a[i] << " ";
        }
    }
    
    else
    {
        for(int i=0 ; i<n2 ; i++)
        {
            b[n2+i] = a[i];
        }
        
        for(int i=0 ; i<n1+n2 ; i++)
        {
            cout << b[i] << " ";
        }
    }
    */
    
    return 0;
}