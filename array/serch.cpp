#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

const size_t arraySize = 5;

void printArray(array <int, arraySize> angka);

int main(){
    
    array <int, arraySize> angka = {2,1,4,3,5};
    int cariAngka;
    bool angkaKetemu;

    printArray(angka);
    cout << "cari angka pada array diatas : ";
    cin >> cariAngka;
    sort(angka.begin(), angka.end());
    angkaKetemu = binary_search(angka.begin(), angka.end(), cariAngka);

    if (angkaKetemu){
        cout << "angka ditemukan" << endl;
    } else {
        cout << "angka tidak ditemukan" << endl;
    }
    
    return 0;
}

void printArray(array <int, arraySize> angka){
    cout << "Array : ";
    for(int &a : angka){
        cout << a << " ";
    }
    cout << endl;
}
