#include <iostream>
#include <string>
using namespace std;

int main(){

    string input_kalimat;
    cout << "masukan kalimat : " << endl;
    getline(cin, input_kalimat);
    cout << "output kalimat : ";
    cout << input_kalimat << endl;

    int posisi = 0;
    int jumlah = 0;
    while (true){
        posisi = input_kalimat.find(" ", posisi + 1);
        jumlah++;
        cout << "posisi : " << posisi << "jumlah" << jumlah << endl;
        if (posisi < 0){
            break;
        }

    }
    // cout << "jumlah kalimat : " << jumlah << endl;
    

    cin.get();
    return 0;
}