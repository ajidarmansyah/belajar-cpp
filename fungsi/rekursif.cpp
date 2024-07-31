#include <iostream>
using namespace std;


int pangkatRekursif(int a , int b){
    if (b <= 1){
        return a;
    }else {
        return a * pangkatRekursif(a, (b - 1));
    }

}

int faktorial(int n){
    if (n <= 1){
        return n;
    }else{
        return n * faktorial(n-1);
    }
}

int main()
{
    // int a,b;
    // cout << "bilangan : ";
    // cin >> a;
    // cout << "pangkat : ";
    // cin >> b;
    // cout << "hasil perhitungan : " << pangkatRekursif(a,b) << endl;
    int bilangan, hasil;
    cout << "bilangan faktorial : ";
    cin >> bilangan;
    hasil = faktorial(bilangan);
    cout << hasil << endl;
    cin.get();
    return 0;
}
