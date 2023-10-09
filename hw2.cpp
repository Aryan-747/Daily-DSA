#include<iostream>

using namespace std;

int main()
{

    int num;
    int check = 0;

    cout << "Enter the number: " << endl;
    cin >> num ;

    for(int i=2 ; i<num ; i++)
    {
        if(num%i == 0){
            check = check + 1;
            break;
        }
    }

    if(check == 0){
        cout << "Number is Prime\n";
    }
    else{
        cout << "Number is not Prime\n";
    }
}