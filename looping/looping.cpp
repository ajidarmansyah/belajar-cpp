#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    cout << "while\n" << endl;
    while (a <= 5)
    {
        cout << "number of ";
        cout << a << endl << endl ;
        a ++;
    }

    int b = 1;
    cout << "do while \n" << endl;
    do
    {
        cout << "number of ";
        cout << b << endl;
        b ++;
    } while (b <= 5);
    
    

    cin.get();
    return 0;
}
