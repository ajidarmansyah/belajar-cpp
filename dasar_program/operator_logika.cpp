#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 2;

    bool hasil;
    hasil = !a == b;
    cout << "untuk not\n";
    cout << hasil << endl;
    
    cout << "untuk and\n";
    cout << (a == 2 and b == 2) << endl;
    cout << (a == 2 and b == 3) << endl;
    cout << (a == 3 && b == 2) << endl;
    cout << (a == 3 && b == 3) << endl;
    
    cout << "untuk or\n";
    cout << (a == 2 or b == 2) << endl;
    cout << (a == 2 or b == 3) << endl;
    cout << (a == 3 || b == 2) << endl;
    cout << (a == 3 || b == 3) << endl;
    

    cin.get();
    return 0;
}
