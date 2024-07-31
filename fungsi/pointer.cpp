#include <iostream>
using namespace std;

int main()
{
    // POINTER
    int a = 5; // mempunyai nilai dan address
    // pointer
    int *aPtr = nullptr;
    aPtr = &a;
    // cout << "nilai dari a : " << a << endl;
    // cout << "alamat dari a : " << aPtr << endl;
    // cout << "mengakses nilai dari alamat a : " << *aPtr << endl;

    //REFERENCE
    int b = 10;
    cout << "nilai dari a : " << b << endl;
    cout << "alamat dari a : " << &b << endl << endl;

    int &c = b; // => reference
    cout << "nilai dari c : " << c << endl; 
    cout << "alamat dari c : " << &c << endl << endl;

    c = 25;
    cout << "nilai dari b : " << b << endl;
    cout << "nilai dari c : " << c << endl;
    return 0;
}
