#include <iostream>

int main() {
    int min, max, faktor, angka, n;
    system("clear");
    std::cout << "Masukkan nilai awal: ";
    std::cin >> min;
    std::cout << "Masukkan nilai akhir: ";
    std::cin >> max;

    system("clear");
    std::cout << "Bilangan prima dari " << min << " sampai " << max << std::endl;

    for (angka = min; angka < max; angka++) {
        faktor = 0;
        for (n = 1; n <= angka; n++) {
            if (angka % n == 0) {
                faktor = faktor + 1;
            }
        }
        if (faktor == 2) {
            std::cout << angka << std::endl;
        }
    }

    return 0;
}
