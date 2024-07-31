#include <iostream>
#include <array>
using namespace std;

int main(){
    // array menggunakan standard library
    // std::array <tipe data, jumlah array> nama array
    array<int, 6> nilai;
    array<string, 2> nama;
    for (int i = 0; i <= 5; i++){
        nilai[i] = i;
        cout << "nilai : " << nilai[i] << " address : " << &nilai[i] << endl;
    };

    nilai[6] = 120;

    nama[0] = "aji";
    nama[1] = "faisal";
    
    cout << endl;
    //menggambil nilai dari array
    cout << nilai.at(4) << endl;
    //addrass awal dari array
    cout << nilai.begin() << endl;
    //addrass akhir dari array
    cout << nilai.end() << endl;
    //panjang dari sebuah array
    cout << nilai.size() << endl;
    cout << nama.at(0) << endl;

    cin.get();
    return 0;
}

int arrayDefauld(){
    int nilai[5] = {1,2,3};
    // nilai[0] = 1;
    // nilai[1] = 2;
    // nilai[2] = 3;
    // nilai[3] = 4;
    // nilai[4] = 5;
    cout << &nilai[0] << "niali dari arry = " << nilai[0] << endl;
    cout << &nilai[1] << "niali dari arry = " << nilai[1] << endl;
    cout << &nilai[2] << "niali dari arry = " << nilai[2] << endl;
    cout << &nilai[3] << "niali dari arry = " << nilai[3] << endl;
    cout << &nilai[4] << "niali dari arry = " << nilai[4] << endl;
}