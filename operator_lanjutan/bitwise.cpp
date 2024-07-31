#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void printBit(int val, string name){
    cout << name << ": " << bitset<8>(val) << endl;
}

int main(){

    unsigned int a = 5;
    unsigned int b = 7;
    unsigned int c;

    // << : bitwise HSR 
    c = a << 1;
    cout << "=====<<=====" << endl;
    printBit(a, "a");
    printBit(c, "c");
    cout << c << endl;
    cout << endl;
    
    // >> : bitwise HSR 
    c = a >> 1;
    cout << "=====>>=====" << endl;
    printBit(a, "a");
    printBit(c, "c");
    cout << endl;
    
    // ~ : bitwise not 
    c = ~a;
    cout << "=====~=====" << endl;
    printBit(a, "a");
    printBit(c, "c");
    cout << c << endl;
    cout << endl;
    
    // ^ : bitwise XOR 
    c = a ^ b;
    cout << "=====^=====" << endl;
    printBit(a, "a");
    printBit(b, "b");
    printBit(c, "c");
    cout << endl;
    
    // | : bitwise OR 
    c = a | b;
    cout << "=====|=====" << endl;
    printBit(a, "a");
    printBit(b, "b");
    printBit(c, "c");
    cout << endl;
    
    // & : bitwise AND 
    c = a & b;
    cout << "=====&=====" << endl;
    printBit(a, "a");
    printBit(b, "b");
    printBit(c, "c");

    cin.get();
    return 0;
}