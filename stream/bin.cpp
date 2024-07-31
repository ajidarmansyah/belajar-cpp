#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream myFile;
    int hasil;
    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));

    cout << "ukuran data : " << sizeof(hasil) << endl;
    cout << hasil << endl;

    cin.get();
    return 0;
}

    // fstream myFile;
    // int number = 12345;
    // int hasil;
    // myFile.open("data.bin", ios::out | ios::binary);
    // myFile.write(reinterpret_cast<char*>(&number), sizeof(number));

    // myFile.close();