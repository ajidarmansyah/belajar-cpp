#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //         //continue;
    //     }
        
    //     cout << i << endl;
    // }

    string name;
    string rumah;
    cout << "siapa nama anda? ";
    getline(cin, name);
    cout << name << " dimana rumah anda? ";
    getline(cin, rumah);
    cout << name << " rumah anda " << rumah << endl;
    
    cin.get();
    return 0;
}
