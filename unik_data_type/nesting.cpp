#include <iostream>
#include <string>
using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    int tahun_relese;
    aktor pemeran_1;
    aktor pemeran_2;
};



int main(){

    aktor aktor1, aktor2;
    film film1;

    aktor1.nama = "Alexsander Supri";
    aktor1.tahun_lahir = 1995;

    aktor2.nama = "Sintia Aprilia";
    aktor2.tahun_lahir = 1998;

    film1.judul = "cinta itu rabun jauh";
    film1.tahun_relese = 2023;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    cout << "====film====" << endl;
    cout << film1.judul << endl;
    cout << film1.tahun_relese << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl;

    cin.get();
    return 0;
}