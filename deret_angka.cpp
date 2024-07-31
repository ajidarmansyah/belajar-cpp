#include <iostream>

using namespace std;

void deretNilaiKaliDua(int input){
    int f_n; 
    int f_n1 = 0;
    int f_n2 = 2;
    cout << 1 << " ";
    for (int i = 1; i <= input; i++){
        f_n = f_n1 + f_n2;
        f_n1 = f_n;
        cout << f_n << " ";
    }
    
}

int main(){

    int input;
    cout << "rege nilai yang ingin anda tampilkan : ";
    cin >> input;
    
    cout << input << endl;
    return 0;
}