#include <iostream>
#include <algorithm>
#include <array>
#include <vector>


using namespace std;

void jumlah(int a){
    cout << a * a << " ";
}

int main(int argc, char const *argv[])
{
    array<int, 6> array_std = {1,2,3,4,5,6};
    vector<int> vektor1 = {2,3,3,4,5};
    vector<int> vektor2 = {2,3,3,4,5};
    int array[5] = {1,2,3,3,4}; // array biasa tidak bisa

    // menghitung duplikasi value pada array
    int hasil = count(vektor1.begin(), vektor1.end(), 3);
    auto find_hasil = find(array_std.begin(), array_std.end(), 2);
    // bool perbandingan = vektor1 == array_std;
    bool hasilPerbandingan = equal(vektor1.begin(), vektor1.end(), array_std.begin());
    cout << "hasil perbandingan vektor1 dan array_std = " << hasilPerbandingan << endl;
    cout << "hasil pencarian = " << find_hasil << endl;

    // for_each(array_std.begin(), array_std.begin() + 3, jumlah);

    // fungsi sort
    vector<int> data = {3,2,4,1,4};
    stable_sort(data.begin(), data.end());
    for(int hasil : data){
        cout << hasil << " ";
    }
    return 0;
}
