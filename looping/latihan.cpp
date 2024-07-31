#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "baris bintang yang akan ditampilkan : ";
    cin >> n;
    cout << "pola 1 " << endl;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "pola 2 " << endl;
    for (int i = 0; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "pola 3 " << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        for (int k = n; k >= i; k--){
            cout << "*";
        }
        
        cout << endl;
    }
    
    cout << "pola 4 " << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}
