#include <iostream>
#include <string>
using namespace std;

// tipe data yang mempunyai beberapa komponen
struct buah{
    int harga;
    string warna;
    string rasa;
};


int main(){
    buah apel;

    apel.harga = 3000;
    apel.warna = "merah";
    apel.rasa = "manis";

    cout << "=====apel=====" << endl;
    cout << apel.harga << endl;
    cout << apel.warna << endl;
    cout << apel.rasa << endl;


    cin.get();
    return 0;
}