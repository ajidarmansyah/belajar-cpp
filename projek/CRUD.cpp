#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

struct Mahasiswa{
    int id;
    string NIM;
    string nama;
    string jurusan;
};


int getOption();
void cekDataBase(fstream &data);
void addDataMahasiswa(fstream &data);
int getDataSize(fstream &data);
void tulisData(fstream &data, int posisi, Mahasiswa &inputMahasiswa);
Mahasiswa readData( fstream &data, int posisi);
void displayDataMahasiswa(fstream &data);
void readDataMahasiswa(fstream &data);

int main(){

    fstream data;
    cekDataBase(data);
    

    int option = getOption();
    char is_continue;

    enum pilihan{CRIATE = 1, READ, UPDATE, DELETE, FINISH};
    while (option != FINISH){
        switch (option){
        case CRIATE: 
            cout << "Tambahkan data mahasiswa" << endl;
            addDataMahasiswa(data);
            break;
        case READ:
            cout << "Tampilkan data mahasiswa" << endl;
            readDataMahasiswa(data);
            break;
        case UPDATE:
            cout << "Ubah data mahasiswa" << endl;
            break;
        case DELETE:
            cout << "Hapus data mahasiswa" << endl;
            break;
        default:
            cout << "Pilihan tidak ditemukan" << endl;
            break;
        }
        label_continue:

        cout << "\ny = yes / n = no\n";
        cout << "Lanjutkan(y/n)";
        cin >> is_continue;
        if (is_continue == 'y' | is_continue == 'Y'){
            option = getOption();
        } else if(is_continue == 'n' | is_continue == 'N'){
            break;
        } else {
            goto label_continue;
        }
        
        
    }
    
    cout << "akhir dari program" << endl;
    

    cin.get();
    return 0;
}

void tulisData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(Mahasiswa));
}

int getDataSize(fstream &data){
    int start,end;
    data.seekg(0,ios::beg);
    start = data.tellg();
    data.seekg(0,ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &data, int posisi){
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1)*sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &data){
    Mahasiswa inputMahasiswa, lastMahasiswa;

    int size = getDataSize(data);

    cout << "size data : " << size << endl;
    
    if (size == 0){
        inputMahasiswa.id = 1;
    } else {
        lastMahasiswa = readData(data, size);
        cout << "id : " << lastMahasiswa.id << endl;
        inputMahasiswa.id = lastMahasiswa.id + 1;
    }
    

    cout << "Nama : ";
    getline(cin, inputMahasiswa.nama);
    cout << "Jurusan : ";
    getline(cin, inputMahasiswa.jurusan);
    cout << "NIM : ";
    getline(cin, inputMahasiswa.NIM);
    tulisData(data, size+1, inputMahasiswa);
}

void cekDataBase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    //untuk mengecek data ada atau tidak
    if (data.is_open()){
        cout << "data ditemukan" << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

int getOption(){
    int input;
    // system("cls");
    cout << "PROGRAM DATA BASE MAHASISWA" << endl;
    cout << "===========================" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "===========================" << endl;
    cout << "Masukan angka untuk meilih : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}

void displayDataMahasiswa(fstream &data){
    int size = getDataSize(data);
    Mahasiswa showMahasiswa;
    cout << "no.\tid.\tNIM.\tNama.\tjurusan." << endl;
    for (int i = 1; i <= size; i++){
        showMahasiswa = readData(data,i);
        cout << i << "\t";
        cout << showMahasiswa.id << "\t";
        cout << showMahasiswa.NIM << "\t";
        cout << showMahasiswa.nama << "\t";
        cout << showMahasiswa.jurusan << "\t";
    }
    

}

void readDataMahasiswa(fstream &data){
    Mahasiswa showMahasiswa;
    data.read(reinterpret_cast<char*>(&showMahasiswa), sizeof(Mahasiswa));
    cout << showMahasiswa.id << endl;
    cout << showMahasiswa.NIM << endl;
    cout << showMahasiswa.nama << endl;
    cout << showMahasiswa.jurusan << endl;
}