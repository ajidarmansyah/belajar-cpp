#include <iostream>
using namespace std;

// prototype function
double hitung_luas(double p, double l);
void tampilkan(double x);

int print(){
    int a = 10;
    cout << a << endl;
}

int a = 5;

int main(int argc, char const *argv[])
{
    double panjang, lebar, hasil;
    cin >> panjang;
    cin >> lebar;

    hasil = hitung_luas(panjang, lebar);
    tampilkan(hasil);

    return 0;
}

double hitung_luas(double p, double l){
    return p * l;
}

void tampilkan(double x){
    cout << "hasil : " << x << endl;
}