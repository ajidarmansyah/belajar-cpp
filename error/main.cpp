#include <iostream>

using namespace std;

int pembagian(int &pembilang, int &penyebut){
    if (penyebut == 0){
        throw "Error: tidak bisa membagi dengan bilangan 0";
    }
    
    return pembilang/penyebut;
}

int main(){
    
    while(true){
        int a,b,c;

        cout << "pembilang: ";
        cin >> a;
        cout << "penyebut: ";
        cin >> b;

        try{
            c = pembagian(a,b);
            cout << "Hasil = " << c << endl; 
        }
        catch(const char* e){
            cout << e << endl;
        }
        
    };

    cin.get();
    return 0;
}
