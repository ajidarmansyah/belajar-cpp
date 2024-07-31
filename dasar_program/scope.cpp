#include <iostream>
using namespace std;

int a = 10;

int print(){
    int a = 12;
    return a;
}

int main(int argc, char const *argv[])
{
    cout << a << endl;
    int a = 5;
    cout << a << endl;
    {
        cout << ::a << endl;
        int a = 2;
        cout << a << endl;
    }
    cout << a << endl;
    cout << print() << endl;
    return 0;
}
