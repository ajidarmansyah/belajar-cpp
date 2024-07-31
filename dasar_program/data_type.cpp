#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // tipe data bilangan bulat
    int a = 2;
    long b = 10;
    short c = 5;

    // tipe data bilangan desimal
    float d = 1.2;
    double e = 1.25;

    // tipe data caracter
    char f = 'a'; 

    // boolean
    bool g = true;

    // cout << a << endl;
    // cout << b << endl;
    // cout << "ini tipe data a " << sizeof(d) << " byte" << endl;
    // cout << "ini tipe data b " << sizeof(e) << " byte" << endl;
    cout << "ini tipe data g " << sizeof(g) << " byte" << endl;
    cin.get();
    return 0;
}
