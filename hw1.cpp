#include<iostream>

using namespace std;

int main()
{
    char usd;
    int eqi;

    cout << "Enter the chararacter: " << endl;
    cin >> usd;

    eqi = usd;

    if(eqi >= 97 && eqi <=122){
        cout << "The entered chararcter is lowercase" << endl;
    }

    else if (eqi >= 65 && eqi <=90){
        cout << "The entered character is uppercase" << endl;
    }
    
    else if (eqi >= 48 && eqi <=57) {
        cout << "The entered character is numeric" << endl;
    }

}