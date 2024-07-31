#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){

    array<int, 5> number = {1,2,3,4,5};
    int angka[5] = {1,4,3,4,5};
    for (int i = 0; i < 5; i++){
        cout << angka[i] << endl;
    }
    cout << endl << endl;
    for(int &hasil : number){
        cout << hasil << endl;
    }

    cin.get();
    return 0;
}