#include <iostream>
/*
    standard library
    cmath => untuk perhitungan matematika
    cstd
*/
using namespace std;

// reporter
int f (int x){ // fungsi yang mengembalikan nilai
    int y = 2*x+4;
    return y; 
}

// worker
void sayHello (string nama){ // fungsi yang tidak mengembalikan nilai
    cout << "halo " << nama << " selamat pagi" << endl;
}

float hitung_luas_kubus (float p, float l, float t){
    float hasil = p * l * t;
    return hasil;
}

int main()
{
    // int input, hasil;
    // cout << "masukan angka : ";
    // cin >> input;
    // hasil = f(input);
    // cout << hasil << endl;

    sayHello("Aji_Darmansyah");

    float panjang, lebar, tinggi;
    cout << "nilai panjang : ";
    cin >> panjang;
    cout << "nilai lebar : ";
    cin >> lebar;
    cout << "nilai tinggi : ";
    cin >> tinggi;
    float hasil_perhitungan = hitung_luas_kubus(panjang,lebar,tinggi);
    cout << hasil_perhitungan << endl;

    cin.get();
    return 0;
}
