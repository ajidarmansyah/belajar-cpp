#include <iostream>

using namespace std;

int main(){

    int a = 5;
    float b = 4.65f;
    char c = 'c';

    cout << char(a + c) << endl;
    cout << (int)b + a << endl;

    cin.get();
    return 0;
}