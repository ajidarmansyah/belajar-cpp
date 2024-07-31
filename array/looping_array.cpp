#include <iostream>
#include <array>
using namespace std;
/*
    fungsi array menggunakan algorithm
    short(array.begain, array.end) => untuk mengurutkan nilai
*/

int main(){
    
    cout << "menggunakan array biasa : \n";
    int arrayNilai[5] = {1,2,3,4,5};
    for(int nilai : arrayNilai){
        cout << "address : " << &nilai << " nilai : " << nilai << endl;
    }
    cout << endl;
    for (int &nilaiRef : arrayNilai){
        cout << "address : " << &nilaiRef << " nilai : " << nilaiRef << endl;
    }
    
    cout << endl;
    for (int &nilaiRef : arrayNilai){
        if (nilaiRef % 2 == 1)
        {
            nilaiRef *= 2;
        }
        cout << "address : " << &nilaiRef << " nilai : " << nilaiRef << endl;
    }

    cout << endl;

    cout << "menggunakan standard library : \n";
    array<int, 5> arrayNilai2 = {1,2,3,4,5};
    for(int nilai : arrayNilai2){
        cout << nilai << endl;
    }
    return 0;
}
