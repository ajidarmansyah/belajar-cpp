#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "masukan angka : ";
    cin >> a;

    if (a % 2 == 1 or -a % 2 == 1)
    {
        cout << a << " adalah bilangan ganjil" << endl;
    } else if (a % 2 == 0 or -a % 2 == 1) 
    {
        cout << a << " adalah bilangan genap" << endl;
    } else
    {
        cout << "yang anda masukan bukan angka" << endl;
    }
    

    // cout << a << endl;

    cin.get();
    return 0;
}
