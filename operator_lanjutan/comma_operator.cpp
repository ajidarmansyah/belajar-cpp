#include <iostream>
using namespace std;

void print(int val){
    cout << val << endl;
}

int main(){
    
    int a;
    int b;
    int c;

    a = (b=2, print(b), c=3, print(c), b+c);
    cout << a << endl;

    cin.get();
    return 0;
}
