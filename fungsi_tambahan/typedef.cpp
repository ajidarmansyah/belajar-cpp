#include <iostream>

using namespace std;

int main(){
    // typedef digunakan untuk menggunakan alias
    typedef int array[2];

    array angka = {1,2};
    cout << angka[0] << " dan " << angka[1] << endl;

    cin.get();
    return 0;
}
