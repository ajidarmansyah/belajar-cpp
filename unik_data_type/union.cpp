#include <iostream>
using namespace std;

// tipe data yang mempunyai beberapa nilai 
union nama{
    int int_value;
    char char_value[4];
};


int main(){

    nama supri;
    supri.int_value = 12345;

    cout << "nilai int_value : " << supri.int_value << endl;
    cout << "nilai char_value : " << supri.char_value << endl;

    supri.char_value[0] = 'a';
    supri.char_value[1] = 'b';
    supri.char_value[2] = 'c';
    supri.char_value[3] = 'd';
    
    cout << "nilai int_value : " << supri.int_value << endl;
    cout << "nilai char_value : " << supri.char_value << endl;

    cin.get();
    return 0;
}