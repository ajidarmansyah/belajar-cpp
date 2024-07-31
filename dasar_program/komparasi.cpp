#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 5;

    bool hasil1, hasil2 ;

    /*
    (==) => sebanding
    (!=) => tidak sebanding
    (>) => lebih dari
    (<) => kururang dari
    (>=) => lebih dari sama dengan
    (<=)=> kurang dari sama dengan
    */
    hasil1 = a > b;
    hasil2 = a < b;
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    cin.get();
    return 0;
}
