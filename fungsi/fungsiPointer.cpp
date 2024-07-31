#include <iostream>
using namespace std;

void fungsi(int *); // fungsi yang menggunakan pointer
void kuadrat(int *);

int main()
{
    int a = 5;
    cout << "nilai a : " << a << endl;
    cout << "alamat a : " << &a << endl;

    fungsi(&a);
    kuadrat(&a);
    cout << "nilai kuadrat a : " << a << endl;

    return 0;
}

void fungsi(int *b){
    cout << "alamat b : " << b << endl;
    cout << "nilai b : " << *b << endl;
}
void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}