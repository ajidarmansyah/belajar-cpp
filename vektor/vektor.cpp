#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> angka = {1,2,3,4};
    vector<string> kata = {"aku","dan","kamu"};

    kata.push_back("menikah");
    kata.erase(kata.begin() + 1);
    for(string kataku : kata){
        cout << kataku << " ";
    }
    return 0;
}
