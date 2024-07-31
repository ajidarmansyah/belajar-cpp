#include <iostream>
#include "aji.h"

void fungsi(){
    std::cout << "ini punya iostream" << std::endl;
}

int main(){
    
    fungsi();
    std::cout << aji::b << std::endl;
    std::cin.get();
    return 0;
}
