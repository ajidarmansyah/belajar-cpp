#include <iostream>
using namespace std;

enum warna {merah, kuning, hijau, hitam};

int main(){
    warna kain;

    kain = merah; //
    cout <<  "index : " << kain << endl; //menampilkan index dari data enum

    //studi kasus
    if(kain == merah){
        cout << "kain berwarna merah" << endl;
    }

    cin.get();
    return 0;
}