#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Penduduk{
    int noKK;
    string nama;
    string desa;
};


int main(){
    Penduduk penduduk1, penduduk2, dataBaca;
    fstream data;

    penduduk1.noKK = 123;
    penduduk1.nama = "junaedi";
    penduduk1.desa = "kalong dua";
    
    penduduk2.noKK = 124;
    penduduk2.nama = "rahmat";
    penduduk2.desa = "kalong dua";

    data.open("penduduk.bin", ios::trunc | ios::out | ios::in | ios::binary);
    data.write(reinterpret_cast<char*>(&penduduk1), sizeof(Penduduk));
    data.write(reinterpret_cast<char*>(&penduduk2), sizeof(Penduduk));
    data.close();

    data.open("penduduk.bin", ios::in | ios::binary);
    
    data.seekp(1*sizeof(Penduduk));
    data.read(reinterpret_cast<char*>(&dataBaca), sizeof(Penduduk));
    cout << dataBaca.noKK << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.desa << endl;

    return 0;
}
