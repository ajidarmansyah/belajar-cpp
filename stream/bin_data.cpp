#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa bacaData;
    myFile.open("data.bin", ios::in | ios::binary);

    myFile.seekp((posisi-1)*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bacaData), sizeof(Mahasiswa));
    cout << bacaData.NIM << endl;
    cout << bacaData.nama << endl;
    cout << bacaData.jurusan << endl;
}

void menulisData(Mahasiswa &data, fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

void menulisDataById(int posisi, Mahasiswa &data, fstream &myFile){
    myFile.seekg((posisi-1)*sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}


int main(){

    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    
    Mahasiswa mahasiswa1, mahasiswa2, data;

    mahasiswa1.NIM = 123;
    mahasiswa1.nama = "Alex";
    mahasiswa1.jurusan = "Teknik";
    
    mahasiswa2.NIM = 124;
    mahasiswa2.nama = "Agung";
    mahasiswa2.jurusan = "Fisika";

    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);

    mahasiswa2.nama = "Dilan";
    menulisDataById(2, mahasiswa2 ,myFile);


    myFile.close();

    data = ambilData(2, myFile);

    

    cin.get();
    return 0;
}