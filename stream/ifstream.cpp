#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    ifstream myFile;
    string nama, output, buffer;
    bool isData = false;
    int no;
    // membaca file menggunakan getline(file, variable)
    myFile.open("data1.txt");
    
    while (!isData){
        getline(myFile, buffer);
        output.append("\n" + buffer);

        if (buffer == "data"){
            isData = true;
        }
        
    }
    cout << output << endl;
    getline(myFile, buffer);
    cout << buffer << endl;

    while (!myFile.eof()){
        myFile >> no;
        myFile >> nama;

        cout << no << "\t" << nama << endl;
    }
    

    cin.get();
    return 0;
}