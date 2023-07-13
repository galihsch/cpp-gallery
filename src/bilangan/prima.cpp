#include <iostream>

using namespace std;

int main() {
    int min, max, faktor, angka, n;
    system("clear");
    cout << "Masukkan nilai awal: ";
    cin >> min;
    cout << "Masukkan nilai akhir: ";
    cin >> max;

    system("clear");
    cout << "Bilangan prima dari " << min << " sampai " << max << endl;

    for (angka = min; angka < max; angka++) {
        faktor = 0;
        for (n = 1; n <= angka; n++) {
            if (angka % n == 0) {
                faktor = faktor + 1;
            }
        }
        if (faktor == 2) {
            cout << angka << " ";
        }
    }

    cout << endl;
    return 0;
}
