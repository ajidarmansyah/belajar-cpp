#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 6;

void printArray(array <int, arraySize> angka){
    cout << "Array angka" << endl;
    for(int &a : angka){
        cout << a << " " ;
    }
    cout << endl;
}

void printArray(array <char, arraySize> huruf){
    cout << "Array huruf" << endl;
    for(char &b : huruf){
        cout << b << " " ;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    array <int, arraySize> angka = {2,3,1,4,6,5};
    array <char, arraySize> huruf = {'a','c','d','b','f','e'};

    cout << "sebelum diurutkan \n";
    printArray(angka);
    printArray(huruf);

    cout << endl;

    cout << "setelah diurutkan \n";
    sort(angka.begin(), angka.end());
    sort(huruf.begin(), huruf.end());
    printArray(angka);
    printArray(huruf);
    return 0;
}
