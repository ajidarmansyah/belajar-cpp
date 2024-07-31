#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "masukan angka : ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "a = 1" << endl;
        break; // untuk menghentikan program
    case 2:
        cout << "a = 2" << endl;
        break;
    case 3:
        cout << "a = 3" << endl;
        break;
    case 4:
        cout << "a = 4" << endl;
        break;
    case 5:
        cout << "a = 5" << endl;
        break;
    
    default:
        cout << "angka tidak ditemukan" << endl;
    }
    return 0;
}
