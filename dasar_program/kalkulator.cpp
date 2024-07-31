#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b;
    char aritmatika;
    float hasil;
    cout << "masukan bilangan pertama: ";
    cin >> a;
    cout << "masukan operator aritmatika(+,-,*,/): ";
    cin >> aritmatika;
    cout << "masukan bilangan kedua: ";
    cin >> b;

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        cout << "\nhasil perhitungan : ";
        cout << a << aritmatika << b;
        cout << " = " << hasil << endl;
        break;
    case '*':
        hasil = a * b;
        cout << "\nhasil perhitungan : ";
        cout << a << aritmatika << b;
        cout << " = " << hasil << endl;
        break;
    case '-':
        hasil = a - b;
        cout << "\nhasil perhitungan : ";
        cout << a << aritmatika << b;
        cout << " = " << hasil << endl;
        break;
    case '/':
        hasil = a / b;
        cout << "\nhasil perhitungan : ";
        cout << a << aritmatika << b;
        cout << " = " << hasil << endl;
        break;
    
    default:
        break;
    }

    return 0;
}
