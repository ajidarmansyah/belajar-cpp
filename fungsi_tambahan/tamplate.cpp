#include <iostream>

using namespace std;

// tamplate berufungsi untuk menampung dan semua tipe data
// auto digunakan untuk menentukan tipe data secara otomatis (memilih bit yang paling besar)

template<typename T>
void print(T data){
    cout << data << endl;
}

template<typename T, typename P>
auto max (T a, P b){
    return (a > b) ? a : b;
}

int main(){
    
    print(5);
    print(5.5);
    print<int>(6.5); //tipe data diubah secara explisit
    print('a');

    print(max(5.0,6));
    cin.get();
    return 0;
}
