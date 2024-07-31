#include <iostream>
#include <string>
using namespace std;

int main(){
    /*
        tinary operator => ?
        variable = kondisi ? true : false
    */ 

    int a = 5;
    int b = 1;

    string output = a < b ? "true" : "false";

    cout << output << endl;

    cin.get();
    return 0;
}
