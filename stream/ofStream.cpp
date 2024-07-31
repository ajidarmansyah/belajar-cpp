#include <iostream>
#include <fstream>

using namespace std;

int main(){

    /*
        ios::out => operasi output
        ios::app => menambahkan data diakhir baris
        ios::trunc => membuat file jika tidak ada atau menghapus data jika sudah ada dan menggantinya dengan yang baru
    */

    ofstream myFile;
    myFile.open("data1.txt");
    myFile << "ini adalah data 1 yang baru";
    myFile.close();

    myFile.open("data2.txt", ios::app);
    myFile << "\nini penulisan data baru";
    myFile.close();

    cin.get();
    return 0;
}