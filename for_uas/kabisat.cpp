#include <iostream>

using namespace std;

int main(){

    int tahun;
    cout << "Masukan Tahun: ";
    cin >> tahun;

    if(tahun % 4 == 0){
        if (tahun % 100 == 0){
            if(tahun % 400 == 0){
                cout << tahun << " Adalah Tahun Kabisat" << endl;
            } else {
                cout << tahun << " Bukan Tahun Kabisat" << endl;
            } 
        } else {
            cout << tahun << " Adalah Tahun Kabisat" << endl;
        }
    } else {
        cout << tahun << " Bukan Tahun Kabisat" << endl;
    }

    return 0;
}