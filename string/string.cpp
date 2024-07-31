#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_1("selamat pagi kawan-kawan");
    string kalimat_2("selamat siang teman-teman");

    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    // menukar nilai string dengan method swap
    kalimat_1.swap(kalimat_2);
    cout << "swap value" << endl;
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    // mengganti nilai string menggunakan replace
    kalimat_1.replace(14,11,"kamu");
    cout << "replace value" << endl;
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    // memasukan string menggunakan insert
    kalimat_1.insert(18," kamu disana!!");
    cout << "insert value" << endl;
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    cin.get();
    return 0;
}