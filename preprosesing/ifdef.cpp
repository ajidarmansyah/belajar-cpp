#include <iostream>
#define FOO

#ifdef FOO
    #define TEST_FOO 5
#else
    #define TEST_FOO
#endif

using namespace std;

int main(int argc, char const *argv[]){

    cout << "Hasil : " << TEST_FOO << endl;
    cin.get();    
    return 0;
}
